#!/bin/bash

# Sources:
# https://github.com/procedural/c_clang_autocomplete
# https://discord.gg/D7pKPw4kFf
# https://discord.com/channels/908452801678561291/908452802165112885/938915342233784350

rm -f /c/GameScriptNative/f1.cpp
cp /c/GameScriptNative/f1.script /c/GameScriptNative/f1.cpp
sed -i $'s/\t/ /g' /c/GameScriptNative/f1.cpp

#========#
# COLORS #
#========#

red=""
gray=""
blue=""
pink=""
cyan=""
white=""
black=""
green=""
brown=""
yellow=""
purple=""
normal=""
bg_black=""
bg_white=""
light_red=""
light_gray=""
light_blue=""
light_cyan=""
light_green=""

#=========#
# OPTIONS #
#=========#

find='`'
return_color=${light_cyan}
argument_color=${light_green}
default_argument_color=${light_red}

#================#
# IMPLEMENTATION #
#================#

IFS='%'
line=$(grep -n ${find} "${1}" | grep -o "^[0-9]*")
if [[ -z ${line} ]]; then exit 1; fi
body=$(sed "${line}q; d" "${1}" | cut -d ${find} -f1)
tail=$(echo "${body}" | \
cut -d '{' -f1 | \
cut -d '}' -f1 | \
cut -d '[' -f1 | \
cut -d ']' -f1 | \
cut -d '#' -f1 | \
cut -d '(' -f1 | \
cut -d ')' -f1 | \
cut -d ';' -f1 | \
cut -d ':' -f1 | \
cut -d '.' -f1 | \
cut -d '+' -f1 | \
cut -d '-' -f1 | \
cut -d '*' -f1 | \
cut -d '/' -f1 | \
cut -d '%' -f1 | \
cut -d '^' -f1 | \
cut -d '&' -f1 | \
cut -d '|' -f1 | \
cut -d '~' -f1 | \
cut -d '!' -f1 | \
cut -d '=' -f1 | \
cut -d '<' -f1 | \
cut -d '>' -f1 | \
cut -d ',' -f1 | \
cut -d ' ' -f1)
column=$((${#body} - ${#tail} + 1))
format="s_#\]_#\] _1; s_\[#_${return_color}_g; s_#\]_${normal}_g; s_<#_${argument_color}_g; s_#>_${normal}_g; s_{#, _,${default_argument_color} \$_g; s_#}_${normal}_g"
clang=$(/c/GameScriptNative/clang++.exe "${@}" -fcolor-diagnostics -fsyntax-only -Xclang -code-completion-macros -Xclang -code-completion-patterns -Xclang -code-completion-brief-comments -Xclang -code-completion-at="${1}":${line}:${column} \
| sed -z "s_\n__g; s_OVERLOAD: _\n${normal}OVERLOAD: _g; s_COMPLETION: _\n${normal}COMPLETION: _g" | sed "${format}; /^$/d")
overload=$(echo "${clang}" | grep "OVERLOAD: ")
complete=$(echo "${clang}" | sed "/COMPLETION: Pattern : /d" | sed "/COMPLETION: _/d" | grep "COMPLETION: ${tail}")
patterns=$(echo "${clang}" | grep "COMPLETION: Pattern : "   | grep "${tail}")
#if [[ ! -z ${patterns} ]]; then echo -e "\n${patterns}"; fi
 if [[ ! -z ${complete} ]]; then echo -e "\n${complete}"; fi
 if [[ ! -z ${overload} ]]; then echo -e "\n${overload}"; fi