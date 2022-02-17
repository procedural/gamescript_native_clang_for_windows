#pragma once

#include <cmath>
#include <string>
#include <vector>
#include <cstdint>

#if defined(_WIN32)
#define cfn extern "C" __declspec(dllexport) void
#else
#define cfn extern "C" void
#endif
#define fn auto
#define let const auto
#define var auto
#define Bool bool
#define Number double
#define Float float
#define Integer int
#define UnsignedInteger unsigned
#define String std::string
#define BoolArray std::vector<Bool>
#define NumberArray std::vector<Number>
#define FloatArray std::vector<Float>
#define IntegerArray std::vector<Integer>
#define UnsignedIntegerArray std::vector<UnsignedInteger>
#define StringArray std::vector<String>

Float asfloat(Float x);

Float asfloat(Integer x);

Float asfloat(UnsignedInteger x);

Integer asint(Float x);

Integer asint(Integer x);

Integer asint(UnsignedInteger x);

UnsignedInteger asuint(Float x);

UnsignedInteger asuint(Integer x);

UnsignedInteger asuint(UnsignedInteger x);

Number tonumber(Number x);

Number tonumber(Float x);

Number tonumber(Integer x);

Number tonumber(UnsignedInteger x);

Float tofloat(Number x);

Float tofloat(Float x);

Float tofloat(Integer x);

Float tofloat(UnsignedInteger x);

Integer toint(Number x);

Integer toint(Float x);

Integer toint(Integer x);

Integer toint(UnsignedInteger x);

UnsignedInteger touint(Number x);

UnsignedInteger touint(Float x);

UnsignedInteger touint(Integer x);

UnsignedInteger touint(UnsignedInteger x);

Number len(String string);

Number len(NumberArray array);

Number len(FloatArray array);

Number len(IntegerArray array);

Number len(UnsignedIntegerArray array);

Number len(StringArray array);

Number first(NumberArray array);

Float first(FloatArray array);

Integer first(IntegerArray array);

UnsignedInteger first(UnsignedIntegerArray array);

String first(StringArray array);

Number last(NumberArray array);

Float last(FloatArray array);

Integer last(IntegerArray array);

UnsignedInteger last(UnsignedIntegerArray array);

String last(StringArray array);

String reverse(String string);

NumberArray reverse(NumberArray array);

FloatArray reverse(FloatArray array);

IntegerArray reverse(IntegerArray array);

UnsignedIntegerArray reverse(UnsignedIntegerArray array);

StringArray reverse(StringArray array);

void append(NumberArray & array, Number element);

void append(FloatArray & array, Float element);

void append(IntegerArray & array, Integer element);

void append(UnsignedIntegerArray & array, UnsignedInteger element);

void append(StringArray & array, String element);

Bool remove(NumberArray & array, Number element);

Bool remove(FloatArray & array, Float element);

Bool remove(IntegerArray & array, Integer element);

Bool remove(UnsignedIntegerArray & array, UnsignedInteger element);

Bool remove(StringArray & array, String element);

Bool remove_at(NumberArray & array, Number index);

Bool remove_at(FloatArray & array, Number index);

Bool remove_at(IntegerArray & array, Number index);

Bool remove_at(UnsignedIntegerArray & array, Number index);

Bool remove_at(StringArray & array, Number index);

void printConsole(String string);

void printDraw(String string);

void windowSetTitle(String title);

Number windowGetWidth() /* -> Number width */;

Number windowGetHeight() /* -> Number height */;

void windowSetWidthHeight(Number width, Number height);

void windowSetFullscreen(Bool fullscreen);

Bool windowIsFocused() /* -> Bool isFocused */;

Bool windowIsHovered() /* -> Bool isHovered */;

Bool windowIsMinimized() /* -> Bool isMinimized */;

Bool windowIsHidden() /* -> Bool isHidden */;

void windowHide();

void windowShow();

void windowRequestAttention();

void drawPoint(String label, Number x, Number y, Number z, Number size, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawLine(String label, Number x0, Number y0, Number z0, Number x1, Number y1, Number z1, Number width, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawTriangle(String label, Number x0, Number y0, Number z0, Number x1, Number y1, Number z1, Number x2, Number y2, Number z2, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawTriangleWireframe(String label, Number x0, Number y0, Number z0, Number x1, Number y1, Number z1, Number x2, Number y2, Number z2, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawSphere(Number x, Number y, Number z, Number size, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawSphereWireframe(Number x, Number y, Number z, Number size, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawDebugText(String label, Number x, Number y, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void drawDebugTextAtPoint(String label, Number x, Number y, Number z);

Bool isRerun() /* -> Bool isRerun */;

Number getCurrentFrame() /* -> Number frame */;

void setCurrentFrame(Number frame);

Number getRandomNumber() /* -> Number number */;

String getExeDirectoryPath() /* -> String path */;

Bool isLinux() /* -> Bool isLinux */;

Bool isWindows() /* -> Bool isWindows */;

Bool isInGameMode() /* -> Bool isInGameMode */;

void defaultCameraDefaultControlDisable();

void defaultCameraDefaultControlEnable();

void defaultCameraDefaultControlForceEnable();

Bool defaultCameraDefaultControlIsEnabled() /* -> Bool isEnabled */;

void defaultCameraSetMoveSpeed(Number speed);

void defaultCameraSetRollSpeed(Number speed);

void defaultCameraSetMouseSensitivity(Number sensitivity);

NumberArray defaultCameraGetVector() /* -> Number position [3] {x, y, z} */;

NumberArray defaultCameraGetVersor() /* -> Number quaternion [4] {x, y, z, w} */;

void defaultCameraSetVector(Number x, Number y, Number z);

void defaultCameraSetVersor(Number x, Number y, Number z, Number w);

void defaultCameraRotate(Number rotationAxisX, Number rotationAxisY, Number rotationAxisZ, Number rotationAngleDeg);

void defaultCameraLookAt(Number x, Number y, Number z, Number upX, Number upY, Number upZ);

void defaultCameraSetFOV(Number fov);

void defaultCameraSetNearClip(Number near);

void defaultCameraSetFarClip(Number far);

void defaultCameraSetProjectionMode(Number mode);

void defaultCameraSetAspectRatio(Number aspectRatio);

void defaultCameraSetForceAspectRatio(Bool forceAspectRatio);

void defaultCameraSetLensOffset(Number lensOffsetX, Number lensOffsetY);

void defaultCameraSetupPerspective(Bool vflip, Number fov, Number nearDist, Number farDist, Number lensOffsetX, Number lensOffsetY);

void defaultCameraSetupOffAxisViewPortal(Number topLeftX, Number topLeftY, Number topLeftZ, Number bottomLeftX, Number bottomLeftY, Number bottomLeftZ, Number bottomRightX, Number bottomRightY, Number bottomRightZ);

void defaultCameraSetVFlip(Bool vflip);

NumberArray defaultCameraScreenToWorld(Number screenX, Number screenY, Number screenZ) /* -> Number worldPosition [3] {x, y, z} */;

NumberArray defaultCameraWorldToScreen(Number worldX, Number worldY, Number worldZ) /* -> Number screenPosition [3] {x, y, z} */;

NumberArray defaultCameraGetSideVector() /* -> Number sideVector [3] {x, y, z} */;

NumberArray defaultCameraGetUpVector() /* -> Number upVector [3] {x, y, z} */;

NumberArray defaultCameraGetLookAtVector() /* -> Number lookAtVector [3] {x, y, z} */;

void defaultCameraGetProjectionMatrix(Number outPointer);

void defaultCameraGetModelViewMatrix(Number outPointer);

void defaultCameraGetModelViewProjectionMatrix(Number outPointer);

void defaultCameraSetControlKeys(Number up, Number down, Number left, Number right, Number forward, Number backward, Number rollLeft, Number rollRight, Number rollReset);

void setBackgroundColor(Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void setViewport(Number x, Number y, Number width, Number height, Bool vflip);

void alphaBlendingEnable();

void alphaBlendingDisable();

void blendModeEnable(Number mode);

void blendModeDisable();

void depthTestEnable();

void depthTestDisable();

void cullingEnable(Number mode);

void cullingDisable();

void clear(Number r0to1, Number g0to1, Number b0to1, Number a0to1);

void clearAlpha();

void clearDepth();

void saveScreenRawToMemory(Number x, Number y, Number width, Number height, Number out8BitRGBAPixels);

Number globalArrayNew8Bit(String label, Number count) /* -> Number pointer */;

Number globalArrayPersistentNew8Bit(String label, Number count) /* -> Number pointer */;

void globalArrayDelete(String label);

void globalArrayPersistentDelete(String label);

void globalArrayDeleteAll();

void globalArrayPersistentDeleteAll();

Number globalArrayGetBytesCount(String label) /* -> Number bytesCount */;

Number globalArrayGetPointer(String label) /* -> Number pointer */;

Number globalArrayPersistentGetBytesCount(String label) /* -> Number bytesCount */;

Number globalArrayPersistentGetPointer(String label) /* -> Number pointer */;

Number globalSharedArrayPersistentNew8Bit(String label, Number count) /* -> Number pointer */;

Number globalSharedArrayPersistentGetBytesCount(String label) /* -> Number bytesCount */;

Number globalSharedArrayPersistentGetPointer(String label) /* -> Number pointer */;

Bool pointerGetBool(Number pointerTo8BitBools, Number index) /* -> Bool value */;

String pointerGetString(Number pointer) /* -> String string */;

String pointerGetSubstring(Number pointer, Number pointerCharsFirst, Number charsCount) /* -> String string */;

Number pointerGetNumber(Number pointerTo32BitFloats, Number index) /* -> Number value */;

Number pointerGetInteger(Number pointerTo32BitInts, Number index) /* -> Number value */;

Number pointerGetUnsignedInteger(Number pointerTo32BitUints, Number index) /* -> Number value */;

Number pointerGetInteger8Bit(Number pointerTo8BitInts, Number index) /* -> Number value */;

Number pointerGetUnsignedInteger8Bit(Number pointerTo8BitUints, Number index) /* -> Number value */;

Number pointerGetAtOffsetNumber(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetInteger(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetUnsignedInteger(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetInteger16Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetUnsignedInteger16Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetNumber64Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetInteger64Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */;

Number pointerGetAtOffsetUnsignedInteger64Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */;

void pointerSetBool(Number pointerTo8BitBools, Number index, Bool value);

void pointerSetString(Number pointer, Number pointerCharsFirst, String string);

void pointerSetStringExcludingNullChar(Number pointer, Number pointerCharsFirst, String string);

void pointerSetSubstring(Number pointer, Number pointerCharsFirst, String string, Number stringCharsFirst, Number stringCharsCount);

void pointerSetNumber(Number pointerTo32BitFloats, Number index, Number value);

void pointerSetInteger(Number pointerTo32BitInts, Number index, Number value);

void pointerSetUnsignedInteger(Number pointerTo32BitUints, Number index, Number value);

void pointerSetInteger8Bit(Number pointerTo8BitInts, Number index, Number value);

void pointerSetUnsignedInteger8Bit(Number pointerTo8BitUints, Number index, Number value);

void pointerSetAtOffsetNumber(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetInteger(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetUnsignedInteger(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetInteger16Bit(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetUnsignedInteger16Bit(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetNumber64Bit(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetInteger64Bit(Number pointer, Number pointerBytesFirst, Number value);

void pointerSetAtOffsetUnsignedInteger64Bit(Number pointer, Number pointerBytesFirst, Number value);

Number pointerGetRaw8Bit(Number pointer, Number bytesFirst) /* -> Number raw8BitsAsDouble */;

Number pointerGetRaw16Bit(Number pointer, Number bytesFirst) /* -> Number raw16BitsAsDouble */;

Number pointerGetRaw32Bit(Number pointer, Number bytesFirst) /* -> Number raw32BitsAsDouble */;

Number pointerGetRaw64Bit(Number pointer, Number bytesFirst) /* -> Number raw64BitsAsDouble */;

void pointerSetRaw8Bit(Number pointer, Number bytesFirst, Number raw8BitsAsDouble);

void pointerSetRaw16Bit(Number pointer, Number bytesFirst, Number raw16BitsAsDouble);

void pointerSetRaw32Bit(Number pointer, Number bytesFirst, Number raw32BitsAsDouble);

void pointerSetRaw64Bit(Number pointer, Number bytesFirst, Number raw64BitsAsDouble);

Bool pointerIsNull(Number pointer) /* -> Bool isNull */;

Number pointerGetNull() /* -> Number nullPointer */;

Bool pointersAreEqual(Number pointerA, Number pointerB) /* -> Bool areEqual */;

Number pointerOffsetByBytes(Number pointer, Number bytesOffset) /* -> Number offsettedPointer */;

Bool pointerDrawPixels(Number pointer, Number pointerBytesOffset, Number pixelsWidth, Number pixelsHeight, Number pixelsFormat, Number pixelsType) /* -> Bool success */;

Number globalDynamicArrayNew(String label) /* -> Number handle */;

Number globalDynamicArrayPersistentNew(String label) /* -> Number handle */;

void globalDynamicArrayDelete(String label);

void globalDynamicArrayPersistentDelete(String label);

void globalDynamicArrayDeleteAll();

void globalDynamicArrayPersistentDeleteAll();

Number globalDynamicArrayGetHandle(String label) /* -> Number handle */;

Number globalDynamicArrayPersistentGetHandle(String label) /* -> Number handle */;

Number dynamicArrayGet(Number handle, Number index) /* -> Number value */;

void dynamicArraySet(Number handle, Number index, Number value);

void dynamicArrayAppend(Number handle, Number value);

Bool dynamicArrayRemoveAt(Number handle, Number index) /* -> Bool success */;

void dynamicArrayRemoveLast(Number handle);

Number dynamicArrayGetSize(Number handle) /* -> Number size */;

void memset(Number pointer, Number pointerBytesFirst, Number value8Bit, Number bytesCount);

void memcpy(Number pointerTarget, Number pointerTargetBytesFirst, Number pointerSource, Number pointerSourceBytesFirst, Number bytesCount);

Bool memcmp(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst, Number bytesCount) /* -> Bool areEqual */;

void threadSafeMemset(Number pointer, Number pointerBytesFirst, Number value8Bit, Number bytesCount);

void threadSafeMemcpy(Number pointerTarget, Number pointerTargetBytesFirst, Number pointerSource, Number pointerSourceBytesFirst, Number bytesCount);

Bool threadSafeMemcmp(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst, Number bytesCount) /* -> Bool areEqual */;

Bool threadWaitForEqualUint64Value(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst) /* -> Bool trueIfFinishedFalseIfAborted */;

Bool threadWaitForEqualOrMoreThanUint64Value(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst) /* -> Bool trueIfFinishedFalseIfAborted */;

Bool threadWaitForThread2FrameToFinish(Number thread2Frame) /* -> Bool trueIfFinishedFalseIfAborted */;

Number strlenWithNullChar(String string) /* -> Number length */;

Number keyboardGetGlfwKeyEvent(Number glfwKey) /* -> Number keyEvent */;

Number keyboardGetGlfwKeyModifiers(Number glfwKey) /* -> Number keyModifiers */;

String keyboardGetGlfwCodepointString() /* -> String codepoint */;

void mouseGlfwSetInputMode(Number mode);

void mouseSetXY(Number x, Number y);

Number mouseGetX() /* -> Number x */;

Number mouseGetY() /* -> Number y */;

Number mouseGetPreviousX() /* -> Number x */;

Number mouseGetPreviousY() /* -> Number y */;

Number mouseGetMoveEvent() /* -> Number mouseEvent */;

Bool mouseGetButtonIsPressed(Number button) /* -> Bool buttonIsPressed */;

Bool mouseGetButtonIsPressedAndHeld(Number button) /* -> Bool buttonIsPressedAndHeld */;

Bool mouseGetButtonIsReleased(Number button) /* -> Bool buttonIsReleased */;

Number mouseGetWheelScroll() /* -> Number scroll */;

Bool gamepadIsPresent(Number gamepadId0to15) /* -> Bool gamepadIsPresent */;

NumberArray gamepadGet15Buttons6AxesNumbers(Number gamepadId0to15) /* -> Number buttonsAndAxes [21] {a, b, x, y, leftBumper, rightBumper, back, start, guide, leftThumb, rightThumb, dpadUp, dpadRight, dpadDown, dpadLeft, axisLeftX, axisLeftY, axisRightX, axisRightY, leftTrigger, rightTrigger} */;

String gamepadGetName(Number gamepadId0to15) /* -> String name */;

String gamepadGetGUID(Number gamepadId0to15) /* -> String GUID */;

Bool gamepadUpdateGamecontrollerdbTxt(Number gamepadId0to15, String mappings) /* -> Bool success */;

Number boolToNumber(Bool boolean) /* -> Number number */;

String boolToString(Bool boolean) /* -> String string */;

Number numberFromRaw8BitInteger(Number raw8BitInteger) /* -> Number number */;

Number numberFromRaw8BitUnsignedInteger(Number raw8BitUnsignedInteger) /* -> Number number */;

Number numberFromRaw16BitInteger(Number raw16BitInteger) /* -> Number number */;

Number numberFromRaw16BitUnsignedInteger(Number raw16BitUnsignedInteger) /* -> Number number */;

Number numberFromRaw32BitInteger(Number raw32BitInteger) /* -> Number number */;

Number numberFromRaw32BitUnsignedInteger(Number raw32BitUnsignedInteger) /* -> Number number */;

Number numberFromRaw32BitFloat(Number raw32BitFloat) /* -> Number number */;

Number numberFromRaw64BitInteger(Number raw64BitInteger) /* -> Number number */;

Number numberFromRaw64BitUnsignedInteger(Number raw64BitUnsignedInteger) /* -> Number number */;

Bool numberToBool(Number number) /* -> Bool boolean */;

String numberToString(Number number) /* -> String string */;

String numberToBinaryString(Number number) /* -> String string */;

String numberWholePartToString(Number number) /* -> String string */;

Number stringCharToNumber(String string) /* -> Number charNumber */;

NumberArray stringToNumberArray(String string) /* -> Number array [] */;

Number interpretStringToInteger(String string) /* -> Number integer */;

Number interpretStringToFloat(String string) /* -> Number float */;

Number interpretStringToDouble(String string) /* -> Number double */;

String stringReadFromFile(String filepath) /* -> String string */;

void stringWriteToFile(String string, String filepath);

void stringAppendToFile(String string, String filepath);

Number binaryGetByteSizeOfFile(String filepath) /* -> Number bytesCount */;

void binaryReadFromFile(String filepath, Number writeToPointer, Number writeToPointerBytesFirst);

void binaryWriteToFile(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, String writeToFilepath);

String getClipboardString() /* -> String clipboard */;

void setClipboardString(String clipboard);

void gizmoSetMode(String label, Number mode);

NumberArray gizmoGetVector(String label) /* -> Number position [3] {x, y, z} */;

NumberArray gizmoGetVersor(String label) /* -> Number quaternion [4] {x, y, z, w} */;

NumberArray gizmoGetScale(String label) /* -> Number scale [3] {x, y, z} */;

void gizmoSetVector(String label, Number x, Number y, Number z);

void gizmoSetVersor(String label, Number x, Number y, Number z, Number w);

void gizmoSetScale(String label, Number x, Number y, Number z);

void gizmoSetDrawScale(String label, Number scale);

void gizmoSetDrawColors(String label, Number xr, Number xg, Number xb, Number xa, Number yr, Number yg, Number yb, Number ya, Number zr, Number zg, Number zb, Number za, Number wr, Number wg, Number wb, Number wa, Number selectr, Number selectg, Number selectb, Number selecta);

void gizmoDelete(String label);

void gizmoDeleteAll();

Number getLastFrameTime() /* -> Number lastFrameTime */;

Number getSystemTimeMillis() /* -> Number ms */;

Number getSystemTimeMicros() /* -> Number us */;

Number getUnixTime() /* -> Number unixTime */;

Bool framebufferBegin(String label, Number width, Number height, Bool setupScreenDefaultIs1) /* -> Bool framebufferIsValid */;

void framebufferEnd(String label);

void framebufferDraw(String label, Number x, Number y, Number width, Number height);

void framebufferClear(String label);

void framebufferCopyToImage(String label, Number image);

void framebufferDelete(String label);

void framebufferDeleteAll();

Number meshNew(String label) /* -> Number handle */;

Number meshPersistentNew(String label) /* -> Number handle */;

void meshDelete(String label);

void meshPersistentDelete(String label);

void meshDeleteAll();

void meshPersistentDeleteAll();

Number meshGetHandle(String label) /* -> Number handle */;

Number meshPersistentGetHandle(String label) /* -> Number handle */;

Bool meshIsUsingColors(Number handle) /* -> Bool boolean */;

Bool meshIsUsingTextures(Number handle) /* -> Bool boolean */;

Bool meshIsUsingIndices(Number handle) /* -> Bool boolean */;

void meshEnableColors(Number handle);

void meshEnableTextures(Number handle);

void meshEnableIndices(Number handle);

void meshDisableColors(Number handle);

void meshDisableTextures(Number handle);

void meshDisableIndices(Number handle);

Bool meshHasVertices(Number handle) /* -> Bool boolean */;

Bool meshHasColors(Number handle) /* -> Bool boolean */;

Bool meshHasTexCoords(Number handle) /* -> Bool boolean */;

Bool meshHasIndices(Number handle) /* -> Bool boolean */;

Number meshGetVerticesCount(Number handle) /* -> Number count */;

Number meshGetColorsCount(Number handle) /* -> Number count */;

Number meshGetTexCoordsCount(Number handle) /* -> Number count */;

Number meshGetIndicesCount(Number handle) /* -> Number count */;

Bool meshHaveVerticesChanged(Number handle) /* -> Bool boolean */;

Bool meshHaveColorsChanged(Number handle) /* -> Bool boolean */;

Bool meshHaveTexCoordsChanged(Number handle) /* -> Bool boolean */;

Bool meshHaveIndicesChanged(Number handle) /* -> Bool boolean */;

void meshAddVertex(Number handle, Number x, Number y, Number z);

void meshAddColor(Number handle, Number r0to1, Number g0to1, Number b0to1, Number a0to1);

void meshAddTexCoord(Number handle, Number u, Number v);

void meshAddIndex(Number handle, Number index);

void meshRemoveVertex(Number handle, Number index);

void meshRemoveColor(Number handle, Number index);

void meshRemoveTexCoord(Number handle, Number index);

void meshRemoveIndex(Number handle, Number index);

void meshClear(Number handle);

void meshClearVertices(Number handle);

void meshClearColors(Number handle);

void meshClearTexCoords(Number handle);

void meshClearIndices(Number handle);

Number meshGetVerticesPointer(Number handle) /* -> Number pointer */;

Number meshGetColorsPointer(Number handle) /* -> Number pointer */;

Number meshGetTexCoordsPointer(Number handle) /* -> Number pointer */;

Number meshGetIndicesPointer(Number handle) /* -> Number pointer */;

void meshMergeDuplicateVertices(Number handle);

void meshSetupIndicesAuto(Number handle);

void meshAddTriangle(Number handle, Number verticesArrayIndex1, Number verticesArrayIndex2, Number verticesArrayIndex3);

void meshDraw(Number handle, Number renderMode, Number scaleX, Number scaleY, Number scaleZ, Number vectorX, Number vectorY, Number vectorZ, Number rotationAxisX, Number rotationAxisY, Number rotationAxisZ, Number rotationAngleDeg);

void meshDrawWithColor(Number handle, Number renderMode, Number scaleX, Number scaleY, Number scaleZ, Number vectorX, Number vectorY, Number vectorZ, Number rotationAxisX, Number rotationAxisY, Number rotationAxisZ, Number rotationAngleDeg, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void meshDrawDebugVertices(String label);

void meshDrawDebugColors(String label);

void meshDrawDebugTexCoords(String label);

void meshDrawDebugIndices(String label);

void meshDrawDebugRayTraceIndices(String label, Number maxShowDistanceToDefaultCamera, Bool raytraceHighlightTrianglesDefaultCameraLooksAt);

Number meshImporterGetMeshesCount(String meshFilepath) /* -> Number count */;

String meshImporterGetMeshName(String meshFilepath, Number meshIndex) /* -> String name */;

void meshImporterGetMesh(String meshFilepath, Number meshIndex, Number writeToMesh);

void meshImporterDelete(String meshFilepath);

void meshImporterDeleteAll();

Number imageNew(String label, Number width, Number height) /* -> Number handle */;

Number imagePersistentNew(String label, Number width, Number height) /* -> Number handle */;

Number imageNewFromFile(String label, String filepath) /* -> Number handle */;

Number imagePersistentNewFromFile(String label, String filepath) /* -> Number handle */;

void imageDelete(String label);

void imagePersistentDelete(String label);

void imageDeleteAll();

void imagePersistentDeleteAll();

Number imageGetHandle(String label) /* -> Number handle */;

Number imagePersistentGetHandle(String label) /* -> Number handle */;

Bool imageLoadFromMemory(Number handle, Number pointer, Number pointerBytesFirst, Number pointerBytesCount) /* -> Bool success */;

void imageClear(Number handle, Number alpha0to255);

Bool imageHasMipmap(Number handle) /* -> Bool hasMipmap */;

void imageMipmapDisable(Number handle);

void imageMipmapEnable(Number handle);

void imageMipmapGenerate(Number handle);

void imageSetTextureMinMagFilter(Number handle, Number minFilter, Number magFilter);

void imageSetTextureWrap(Number handle, Number wrapX, Number wrapY);

void imageSetTextureMaxAnisotropy(Number handle, Number maxAnisotropy);

Number imageGetWidth(Number handle) /* -> Number width */;

Number imageGetHeight(Number handle) /* -> Number height */;

Number imageGetBitsPerPixel(Number handle) /* -> Number bitsPerPixel */;

Number imageGetImageType(Number handle) /* -> Number imageType */;

Number imageGetPixelsPointer(Number handle) /* -> Number pointerToPixels */;

NumberArray imageGetColor(Number handle, Number x, Number y) /* -> Number color [4] {r0To255, g0To255, b0To255, a0To255} */;

void imageSetColor(Number handle, Number x, Number y, Number r0to255, Number g0to255, Number b0to255, Number a0to255);

void imageGammaCorrect(Number handle);

void imageUpdate(Number handle);

void imageBind(Number handle);

void imageUnbind(Number handle);

Bool shaderBegin(String label, String filepathShaderVert, String filepathShaderFrag) /* -> Bool shadersAreValid */;

void shaderEnd(String label);

void shaderSetUniform4f(String label, String uniformName, Number x, Number y, Number z, Number w);

void shaderSetUniform4fv(String label, String uniformName, Number pointer, Number count);

void shaderSetUniformMatrix4f(String label, String uniformName, Number pointer);

void shaderSetUniformImage(String label, String uniformName, Number imageHandle, Number textureLocation);

void shaderDelete(String label);

void shaderDeleteAll();

Number soundPlayerNew(String label) /* -> Number handle */;

Number soundPlayerPersistentNew(String label) /* -> Number handle */;

void soundPlayerDelete(String label);

void soundPlayerPersistentDelete(String label);

void soundPlayerDeleteAll();

void soundPlayerPersistentDeleteAll();

Number soundPlayerGetHandle(String label) /* -> Number handle */;

Number soundPlayerPersistentGetHandle(String label) /* -> Number handle */;

Bool soundPlayerLoad(Number handle, String filepath, Bool streamDefaultIsFalse) /* -> Bool success */;

void soundPlayerUnload(Number handle);

void soundPlayerPlay(Number handle);

void soundPlayerStop(Number handle);

void soundPlayerSetVolume(Number handle, Number volume0to1);

void soundPlayerSetPan(Number handle, Number panMinus1to1);

void soundPlayerSetSpeed(Number handle, Number speedDefaultIs1);

void soundPlayerSetPaused(Number handle, Bool paused);

void soundPlayerSetLoop(Number handle, Bool loop);

void soundPlayerSetMultiPlay(Number handle, Bool multiplay);

void soundPlayerSetPosition(Number handle, Number percent0to1);

Number soundPlayerGetPosition(Number handle) /* -> Number percent0to1 */;

void soundPlayerSetPositionMS(Number handle, Number milliseconds);

Number soundPlayerGetPositionMS(Number handle) /* -> Number milliseconds */;

Bool soundPlayerIsPlaying(Number handle) /* -> Bool isPlaying */;

Number soundPlayerGetSpeed(Number handle) /* -> Number speed */;

Number soundPlayerGetPan(Number handle) /* -> Number pan */;

Number soundPlayerGetVolume(Number handle) /* -> Number volume */;

Bool soundPlayerIsLoaded(Number handle) /* -> Bool isLoaded */;

void soundSetVolume(Number volume0to1);

void soundShutdown();

void soundStopAll();

void soundUpdate();

void imguiBegin();

void imguiEnd();

Bool imguiWindowBegin(String windowName, Number outPointerToWindowIsOpenBool, Number outPointerToWindowIsOpenBoolBytesFirst) /* -> Bool state */;

void imguiWindowEnd();

Bool imguiButton(String buttonName, Number buttonWidth, Number buttonHeight) /* -> Bool state */;

void imguiText(String text);

Bool imguiTextMultiline(String textFieldName, String text, Number textFieldWidth, Number textFieldHeight) /* -> Bool state */;

Bool imguiInputText(String textFieldName, Number outPointerToString, Number outPointerToStringBytesFirst, Number outPointerToStringBytesCountMax) /* -> Bool state */;

Bool imguiInputTextMultiline(String textFieldName, Number outPointerToString, Number outPointerToStringBytesFirst, Number outPointerToStringBytesCountMax, Number textFieldWidth, Number textFieldHeight) /* -> Bool state */;

void profileBegin(String mark);

void profileEnd(String mark);

String systemCommand(String command) /* -> String output */;

Bool glGetIntegerv(Number glenum, Number outPointer, Number outPointerBytesFirst) /* -> Bool success */;

Number getUniqueNumber() /* -> Number uniqueNumber */;

Number getUint64Max() /* -> Number uint64Max */;

Number getLibGameHandle() /* -> Number handle */;

Number getLibThread2Handle() /* -> Number handle */;

Number getGlfwWindowHandle() /* -> Number handle */;

Number getLastDragAndDropCounter() /* -> Number counter */;

Number getLastDragAndDropFilepathsCount() /* -> Number count */;

String getLastDragAndDropFilepath(Number index) /* -> String filepath */;

Number getLastDragAndDropPositionX() /* -> Number x */;

Number getLastDragAndDropPositionY() /* -> Number y */;

Number githubR_lyehLz4xEncode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount, Number flags) /* -> Number value */;

Number githubR_lyehLz4xDecode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount) /* -> Number value */;

Number githubR_lyehLz4xBoundsEncodeOutBytesCount(Number bytesCount, Number flags) /* -> Number value */;

Number githubR_lyehUlzEncode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount, Number flags) /* -> Number value */;

Number githubR_lyehUlzDecode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount) /* -> Number value */;

Number githubR_lyehUlzBoundsEncodeOutBytesCount(Number bytesCount, Number flags) /* -> Number value */;

void thread2Run();

void thread2StopAndWaitFor();

Bool thread2IsRunning() /* -> Bool isRunning */;

String getGameScriptString() /* -> String script */;

void setGameScriptStringForNextFrame(String string);

void setGameScriptStringForNextFrameFromPointer(Number pointer, Number pointerBytesFirst);

String getThread2ScriptString() /* -> String script */;

void setThread2ScriptStringForNextFrame(String string);

void setThread2ScriptStringForNextFrameFromPointer(Number pointer, Number pointerBytesFirst);

void libGameScriptExternalProcedureReload(Bool printErrors);

void libGameScriptExternalProcedureCall2(Number parameter1, Number parameter2);

void libGameScriptExternalProcedureCall3(Number parameter1, Number parameter2, Number parameter3);

Number programGetArgumentsCount() /* -> Number argumentsCount */;

String programGetArgument(Number index) /* -> String argument */;

void programClose();

Number globalMeshesGetCount() /* -> Number count */;

Number globalMeshesPersistentGetCount() /* -> Number count */;

String globalMeshesGetMeshLabelByMeshIndex(Number index) /* -> String label */;

String globalMeshesPersistentGetMeshLabelByMeshIndex(Number index) /* -> String label */;

Number globalMeshesGetMeshHandleByMeshIndex(Number index) /* -> Number handle */;

Number globalMeshesPersistentGetMeshHandleByMeshIndex(Number index) /* -> Number handle */;

Number globalMeshesGetHaveVerticesChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesGetHaveColorsChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesGetHaveTexCoordsChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesGetHaveIndicesChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesPersistentGetHaveVerticesChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesPersistentGetHaveColorsChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesPersistentGetHaveTexCoordsChangedMeshIndexesCount() /* -> Number count */;

Number globalMeshesPersistentGetHaveIndicesChangedMeshIndexesCount() /* -> Number count */;

NumberArray globalMeshesGetHaveVerticesChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesGetHaveColorsChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesGetHaveTexCoordsChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesGetHaveIndicesChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesPersistentGetHaveVerticesChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesPersistentGetHaveColorsChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesPersistentGetHaveTexCoordsChangedMeshIndexes(Number count) /* -> Number indexes [] */;

NumberArray globalMeshesPersistentGetHaveIndicesChangedMeshIndexes(Number count) /* -> Number indexes [] */;

Number globalKeyPropertyGetKeyLabelsCount() /* -> Number count */;

Bool globalKeyPropertyIsKeyLabelExists(String key) /* -> Bool exists */;

String globalKeyPropertyGetKeyLabelByKeyIndex(Number index) /* -> String label */;

Number globalKeyPropertyGetKeyPropertyLabelsCount(String key) /* -> Number count */;

Bool globalKeyPropertyIsKeyPropertyLabelExists(String key, String property) /* -> Bool exists */;

String globalKeyPropertyGetKeyPropertyLabelByPropertyIndex(String key, Number index) /* -> String label */;

void globalKeyPropertyRemoveKey(String key);

void globalKeyPropertyRemoveAllKeys();

void globalKeyPropertyRemoveProperty(String key, String property);

void globalKeyPropertyRemoveAllProperties(String key);

void globalKeyPropertySetString(String key, String property, String value);

void globalKeyPropertySetNumber(String key, String property, Number value);

void globalKeyPropertySetBool(String key, String property, Bool value);

String globalKeyPropertyGetString(String key, String property) /* -> String value */;

Number globalKeyPropertyGetNumber(String key, String property) /* -> Number value */;

Bool globalKeyPropertyGetBool(String key, String property) /* -> Bool value */;

Number getCurrentFrameThread2() /* -> Number frameOfThread2 */;

void setCurrentFrameThread2(Number frameOfThread2);

Bool threadWaitForThread1FrameToFinish(Number thread1Frame) /* -> Bool trueIfFinishedFalseIfAborted */;

Number ertAffineSpace3fGetSizeOfInBytes() /* -> Number sizeOfInBytes */;

void ertAffineSpace3fSetDefaultInitialize(Number outPointer, Number outPointerBytesFirst);

void ertAffineSpace3fSetInitialize(Number outPointer, Number outPointerBytesFirst, Number v0, Number v1, Number v2, Number v3, Number v4, Number v5, Number v6, Number v7, Number v8, Number v9, Number v10, Number v11);

void ertAffineSpace3fSetLookAtPoint(Number outPointer, Number outPointerBytesFirst, Number posX, Number posY, Number posZ, Number targetX, Number targetY, Number targetZ, Number upX, Number upY, Number upZ);

void ertAffineSpace3fScale(Number outPointer, Number outPointerBytesFirst, Number scaleX, Number scaleY, Number scaleZ);

void ertAffineSpace3fTranslate(Number outPointer, Number outPointerBytesFirst, Number translateX, Number translateY, Number translateZ);

void ertAffineSpace3fRotate(Number outPointer, Number outPointerBytesFirst, Number rotatePosX, Number rotatePosY, Number rotatePosZ, Number rotateAxisX, Number rotateAxisY, Number rotateAxisZ, Number rotateAngle);

Number ertAffineSpace3fGetLVXX(Number pointer, Number pointerBytesFirst) /* -> Number l_vx_x */;

Number ertAffineSpace3fGetLVXY(Number pointer, Number pointerBytesFirst) /* -> Number l_vx_y */;

Number ertAffineSpace3fGetLVXZ(Number pointer, Number pointerBytesFirst) /* -> Number l_vx_z */;

Number ertAffineSpace3fGetLVYX(Number pointer, Number pointerBytesFirst) /* -> Number l_vy_x */;

Number ertAffineSpace3fGetLVYY(Number pointer, Number pointerBytesFirst) /* -> Number l_vy_y */;

Number ertAffineSpace3fGetLVYZ(Number pointer, Number pointerBytesFirst) /* -> Number l_vy_z */;

Number ertAffineSpace3fGetLVZX(Number pointer, Number pointerBytesFirst) /* -> Number l_vz_x */;

Number ertAffineSpace3fGetLVZY(Number pointer, Number pointerBytesFirst) /* -> Number l_vz_y */;

Number ertAffineSpace3fGetLVZZ(Number pointer, Number pointerBytesFirst) /* -> Number l_vz_z */;

Number ertAffineSpace3fGetPX(Number pointer, Number pointerBytesFirst) /* -> Number p_x */;

Number ertAffineSpace3fGetPY(Number pointer, Number pointerBytesFirst) /* -> Number p_y */;

Number ertAffineSpace3fGetPZ(Number pointer, Number pointerBytesFirst) /* -> Number p_z */;

void ertAffineSpace3fCopyFromArray(Number in12FloatsPointer, Number in12FloatsPointerBytesFirst, Number outAffineSpace3fPointer, Number outAffineSpace3fPointerBytesFirst);

void ertAffineSpace3fCopyToArray(Number inAffineSpace3fPointer, Number inAffineSpace3fPointerBytesFirst, Number out12FloatsPointer, Number out12FloatsPointerBytesFirst);

Number ertCreateDevice(String typeDefaultIsdefault, Number numThreadsDefaultIs0) /* -> Number deviceHandle */;

void ertDestroyDevice(Number deviceHandle);

Number ertNewCamera(Number deviceHandle, String type) /* -> Number cameraHandle */;

Number ertNewData(Number deviceHandle, String type, Number bytes, Number dataPointer, Number dataPointerBytesFirst) /* -> Number dataHandle */;

Number ertNewDataFromFile(Number deviceHandle, String type, String file, Number offset, Number bytes) /* -> Number dataHandle */;

Number ertNewImage(Number deviceHandle, String type, Number width, Number height, Number dataPointer, Number dataPointerBytesFirst) /* -> Number imageHandle */;

Number ertNewImageFromFile(Number deviceHandle, String file) /* -> Number imageHandle */;

Number ertNewTexture(Number deviceHandle, String type) /* -> Number textureHandle */;

Number ertNewMaterial(Number deviceHandle, String type) /* -> Number materialHandle */;

Number ertNewShape(Number deviceHandle, String type) /* -> Number shapeHandle */;

Number ertNewLight(Number deviceHandle, String type) /* -> Number lightHandle */;

Number ertNewShapePrimitive(Number deviceHandle, Number shapeHandle, Number materialHandle, Number transformPointer, Number transformPointerBytesFirst) /* -> Number primitiveHandle */;

Number ertNewLightPrimitive(Number deviceHandle, Number lightHandle, Number transformPointer, Number transformPointerBytesFirst) /* -> Number primitiveHandle */;

Number ertTransformPrimitive(Number deviceHandle, Number primitiveHandle, Number transformPointer, Number transformPointerBytesFirst) /* -> Number primitiveHandle */;

Number ertNewScene(Number deviceHandle, String type, Number primitiveHandlesPointer, Number primitiveHandlesPointerBytesFirst, Number size) /* -> Number sceneHandle */;

Number ertNewToneMapper(Number deviceHandle, String type) /* -> Number toneMapperHandle */;

Number ertNewRenderer(Number deviceHandle, String type) /* -> Number rendererHandle */;

Number ertNewFrameBuffer(Number deviceHandle, String type, Number width, Number height, Number buffersDefaultIs1) /* -> Number frameBufferHandle */;

Number ertGetFrameBufferWidth(Number deviceHandle, Number frameBufferHandle) /* -> Number width */;

Number ertGetFrameBufferHeight(Number deviceHandle, Number frameBufferHandle) /* -> Number height */;

Number ertMapFrameBuffer(Number deviceHandle, Number frameBufferHandle) /* -> Number pointer */;

void ertUnmapFrameBuffer(Number deviceHandle, Number frameBufferHandle);

void ertSwapBuffers(Number deviceHandle, Number frameBufferHandle);

void ertIncRef(Number deviceHandle, Number handle);

void ertDecRef(Number deviceHandle, Number handle);

void ertSetBool1(Number deviceHandle, Number handle, String property, Bool x);

void ertSetBool2(Number deviceHandle, Number handle, String property, Bool x, Bool y);

void ertSetBool3(Number deviceHandle, Number handle, String property, Bool x, Bool y, Bool z);

void ertSetBool4(Number deviceHandle, Number handle, String property, Bool x, Bool y, Bool z, Bool w);

void ertSetInt1(Number deviceHandle, Number handle, String property, Number x);

void ertSetInt2(Number deviceHandle, Number handle, String property, Number x, Number y);

void ertSetInt3(Number deviceHandle, Number handle, String property, Number x, Number y, Number z);

void ertSetInt4(Number deviceHandle, Number handle, String property, Number x, Number y, Number z, Number w);

void ertSetFloat1(Number deviceHandle, Number handle, String property, Number x);

void ertSetFloat2(Number deviceHandle, Number handle, String property, Number x, Number y);

void ertSetFloat3(Number deviceHandle, Number handle, String property, Number x, Number y, Number z);

void ertSetFloat4(Number deviceHandle, Number handle, String property, Number x, Number y, Number z, Number w);

void ertSetArray(Number deviceHandle, Number handle, String property, String type, Number dataHandle, Number size, Number stride, Number ofs);

void ertSetString(Number deviceHandle, Number handle, String property, String str);

void ertSetImage(Number deviceHandle, Number handle, String property, Number imageHandle);

void ertSetTexture(Number deviceHandle, Number handle, String property, Number textureHandle);

void ertSetTransform(Number deviceHandle, Number handle, String property, Number transformPointer, Number transformPointerBytesFirst);

void ertClear(Number deviceHandle, Number handle);

void ertCommit(Number deviceHandle, Number handle);

void ertRenderFrame(Number deviceHandle, Number rendererHandle, Number cameraHandle, Number sceneHandle, Number toneMapperHandle, Number frameBufferHandle, Number accumulate);

NumberArray ertPick(Number deviceHandle, Number cameraHandle, Number x, Number y, Number sceneHandle) /* -> Number point [4] {x, y, z, isHit} */;

void ertInitializeRayStruct(Number deviceHandle, Number orgX, Number orgY, Number orgZ, Number dirX, Number dirY, Number dirZ, Number nearDefaultIs0, Number farDefaultIsEmbreeInf, Number timeDefaultIs0, Number outRayStructPointer, Number outRayStructPointerBytesFirst);

void ertInitializeRayStructForCameraPixelSample(Number deviceHandle, Number cameraHandle, Number pixelXFrom0To1, Number pixelYFrom0To1, Number pixelSamplePosXFrom0ToExcluded1DefaultIs0Point5, Number pixelSamplePosYFrom0ToExcluded1DefaultIs0Point5, Number outRayStructPointer, Number outRayStructPointerBytesFirst);

void ertSceneIntersectRayStructToHitStruct(Number deviceHandle, Number sceneHandle, Number inRayStructPointer, Number inRayStructPointerBytesFirst, Number outHitStructPointer, Number outHitStructPointerBytesFirst);

void onRerunCallErtDecRef(Number deviceHandle, Number handle);

void onRerunCallErtDestroyDevice(Number deviceHandle);

Number getRedStructsCount() /* -> Number count */;

String getRedStructName(Number index) /* -> String name */;

Number getRedStructMembersCount() /* -> Number count */;

String getRedStructMemberName(Number index) /* -> String name */;

Number redStructSizeof(String structName) /* -> Number bytesCount */;

Number redStructMemberSizeof(String structName, String structMemberName) /* -> Number bytesCount */;

Number redStructMemberOffsetof(String structName, String structMemberName) /* -> Number bytesFirst */;

Number redStructMemberTypeof(String structName, String structMemberName) /* -> Number structMemberType */;

Number redCreateContext(Bool enableDebugMode) /* -> Number context */;

Number redCreateContextWithRayTracingFeatureLevel1(Bool enableDebugMode) /* -> Number context */;

Number redCreateContextWithRayTracingFeatureLevel2(Bool enableDebugMode) /* -> Number context */;

Number redHandleContextGetProcAddr(Number contextHandle, String procedureName) /* -> Number address */;

void redMemoryGetBudget(Number context, Number gpuHandle, Number outMemoryBudget, Number outStatuses);

Number redMemoryAllocate(Number context, Number gpuHandle, String handleName, Number bytesCount, Number memoryTypeIndex, Number dedicateToArray, Number dedicateToImage, Number memoryBitflags, Number outStatuses) /* -> Number memoryHandle */;

Number redMemoryAllocateMappable(Number context, Number gpuHandle, String handleName, Bool dedicate, Number array, Number arrayMemoryBytesCount, Number memoryTypeIndex, Number memoryBitflags, Number outStatuses) /* -> Number memoryHandle */;

void redMemoryFree(Number context, Number gpuHandle, Number memory);

void redMemorySet(Number context, Number gpuHandle, Number memoryArraysCount, Number memoryArrays, Number memoryImagesCount, Number memoryImages, Number outStatuses);

Number redMemoryMap(Number context, Number gpuHandle, Number mappableMemory, Number mappableMemoryBytesFirst, Number mappableMemoryBytesCount, Number outStatuses) /* -> Number pointer */;

void redMemoryUnmap(Number context, Number gpuHandle, Number mappableMemory);

void redMemoryNonCoherentFlush(Number context, Number gpuHandle, Number mappableMemoryRangesCount, Number mappableMemoryRanges, Number outStatuses);

void redMemoryNonCoherentInvalidate(Number context, Number gpuHandle, Number mappableMemoryRangesCount, Number mappableMemoryRanges, Number outStatuses);

Number redStructsMemoryAllocate(Number context, Number gpuHandle, String handleName, Number maxStructsCount, Number maxStructsMembersOfTypeArrayROConstantCount, Number maxStructsMembersOfTypeArrayROOrArrayRWCount, Number maxStructsMembersOfTypeTextureROCount, Number maxStructsMembersOfTypeTextureRWCount, Number outStatuses) /* -> Number structsMemoryHandle */;

Number redStructsMemoryAllocateSamplers(Number context, Number gpuHandle, String handleName, Number maxStructsCount, Number maxStructsMembersOfTypeSamplerCount, Number outStatuses) /* -> Number structsMemoryHandle */;

void redStructsMemorySuballocateStructs(Number context, Number gpuHandle, Number handleNames, Number structsMemory, Number structsDeclarationsCount, Number structsDeclarations, Number outStructs, Number outStatuses);

void redStructsMemoryReset(Number context, Number gpuHandle, Number structsMemory, Number outStatuses);

void redStructsMemoryFree(Number context, Number gpuHandle, Number structsMemory);

void redStructsSet(Number context, Number gpuHandle, Number structsMembersCount, Number structsMembers);

Number redCreateArray(Number context, Number gpuHandle, String handleName, Number type, Number bytesCount, Number structuredBufferElementBytesCount, Number initialAccess, Number initialQueueFamilyIndex, Bool dedicate, Number outArray, Number outStatuses) /* -> Number arrayHandle */;

Number redCreateImage(Number context, Number gpuHandle, String handleName, Number dimensions, Number format, Number width, Number height, Number depth, Number levelsCount, Number layersCount, Number multisampleCount, Number restrictToAccess, Number initialAccess, Number initialQueueFamilyIndex, Bool dedicate, Number outImage, Number outStatuses) /* -> Number imageHandle */;

Number redCreateSampler(Number context, Number gpuHandle, String handleName, Number filteringMag, Number filteringMin, Number filteringMip, Number behaviorOutsideTextureCoordinateU, Number behaviorOutsideTextureCoordinateV, Number behaviorOutsideTextureCoordinateW, Number mipLodBias, Bool enableAnisotropy, Number maxAnisotropy, Bool enableCompare, Number compareOp, Number minLod, Number maxLod, Number outStatuses) /* -> Number samplerHandle */;

Number redCreateTexture(Number context, Number gpuHandle, String handleName, Number image, Number parts, Number dimensions, Number format, Number levelsFirst, Number levelsCount, Number layersFirst, Number layersCount, Number restrictToAccess, Number outStatuses) /* -> Number textureHandle */;

Number redCreateGpuCode(Number context, Number gpuHandle, String handleName, Number irBytesCount, Number ir, Number outStatuses) /* -> Number gpuCodeHandle */;

Number redCreateOutputDeclaration(Number context, Number gpuHandle, String handleName, Number outputDeclarationMembers, Number outputDeclarationMembersResolveSources, Bool dependencyByRegion, Bool dependencyByRegionAllowUsageAliasOrderBarriers, Number outStatuses) /* -> Number outputDeclarationHandle */;

Number redCreateStructDeclaration(Number context, Number gpuHandle, String handleName, Number structDeclarationMembersCount, Number structDeclarationMembers, Number structDeclarationMembersArrayROCount, Number structDeclarationMembersArrayRO, Bool procedureParametersHandlesDeclaration, Number outStatuses) /* -> Number structDeclarationHandle */;

Number redCreateProcedureParameters(Number context, Number gpuHandle, String handleName, Number procedureParametersDeclaration, Number outStatuses) /* -> Number procedureParametersHandle */;

Number redCreateProcedureCache(Number context, Number gpuHandle, String handleName, Number fromBlobBytesCount, Number fromBlob, Number outStatuses) /* -> Number procedureCacheHandle */;

Number redCreateProcedure(Number context, Number gpuHandle, String handleName, Number procedureCache, Number outputDeclaration, Number procedureParameters, String gpuCodeVertexMainProcedureName, Number gpuCodeVertex, String gpuCodeFragmentMainProcedureName, Number gpuCodeFragment, Number state, Number stateExtension, Bool deriveBase, Number deriveFrom, Number outStatuses) /* -> Number procedureHandle */;

Number redCreateProcedureCompute(Number context, Number gpuHandle, String handleName, Number procedureCache, Number procedureParameters, String gpuCodeMainProcedureName, Number gpuCode, Number outStatuses) /* -> Number procedureHandle */;

Number redCreateOutput(Number context, Number gpuHandle, String handleName, Number outputDeclaration, Number outputMembers, Number outputMembersResolveTargets, Number width, Number height, Number outOutput, Number outStatuses) /* -> Number outputHandle */;

Number redCreateCpuSignal(Number context, Number gpuHandle, String handleName, Bool createSignaled, Number outStatuses) /* -> Number cpuSignalHandle */;

Number redCreateGpuSignal(Number context, Number gpuHandle, String handleName, Number outStatuses) /* -> Number gpuSignalHandle */;

Number redCreateGpuToCpuSignal(Number context, Number gpuHandle, String handleName, Number outStatuses) /* -> Number gpuToCpuHandle */;

void redCreateCalls(Number context, Number gpuHandle, String handleName, Number queueFamilyIndex, Number outCalls, Number outStatuses);

void redCreateCallsReusable(Number context, Number gpuHandle, String handleName, Number queueFamilyIndex, Number outCalls, Number outStatuses);

void redDestroyContext(Number context);

void redDestroyArray(Number context, Number gpuHandle, Number array);

void redDestroyImage(Number context, Number gpuHandle, Number image);

void redDestroySampler(Number context, Number gpuHandle, Number sampler);

void redDestroyTexture(Number context, Number gpuHandle, Number texture);

void redDestroyGpuCode(Number context, Number gpuHandle, Number gpuCode);

void redDestroyOutputDeclaration(Number context, Number gpuHandle, Number outputDeclaration);

void redDestroyStructDeclaration(Number context, Number gpuHandle, Number structDeclaration);

void redDestroyProcedureParameters(Number context, Number gpuHandle, Number procedureParameters);

void redDestroyProcedureCache(Number context, Number gpuHandle, Number procedureCache);

void redDestroyProcedure(Number context, Number gpuHandle, Number procedure);

void redDestroyOutput(Number context, Number gpuHandle, Number output);

void redDestroyCpuSignal(Number context, Number gpuHandle, Number cpuSignal);

void redDestroyGpuSignal(Number context, Number gpuHandle, Number gpuSignal);

void redDestroyGpuToCpuSignal(Number context, Number gpuHandle, Number gpuToCpuSignal);

void redDestroyCalls(Number context, Number gpuHandle, Number calls, Number callsMemory);

void redProcedureCacheGetBlob(Number context, Number gpuHandle, Number procedureCache, Number outBlobBytesCount, Number outBlob, Number outStatuses);

void redProcedureCacheMergeCaches(Number context, Number gpuHandle, Number sourceProcedureCachesCount, Number sourceProcedureCaches, Number targetProcedureCache, Number outStatuses);

Number redCpuSignalGetStatus(Number context, Number gpuHandle, Number cpuSignal) /* -> Number status */;

void redCpuSignalWait(Number context, Number gpuHandle, Number cpuSignalsCount, Number cpuSignals, Bool waitAll, Number outStatuses);

void redCpuSignalUnsignal(Number context, Number gpuHandle, Number cpuSignalsCount, Number cpuSignals, Number outStatuses);

Number redGpuToCpuSignalGetStatus(Number context, Number gpuHandle, Number gpuToCpuSignal) /* -> Number status */;

void redGpuToCpuSignalUnsignal(Number context, Number gpuHandle, Number gpuToCpuSignal, Number outStatuses);

void redCallsSet(Number context, Number gpuHandle, Number calls, Number callsMemory, Bool callsReusable, Number outStatuses);

void redCallsEnd(Number context, Number gpuHandle, Number calls, Number callsMemory, Number outStatuses);

void redGetCallProceduresAndAddresses(Number context, Number gpuHandle, Number outCallProceduresAndAddresses, Number outStatuses);

void redCallGpuToCpuSignalSignal(Number callProceduresAndAddresses, Number calls, Number signalGpuToCpuSignal, Number setTo8192);

void redCallCopyArrayToArray(Number callProceduresAndAddresses, Number calls, Number arrayR, Number arrayW, Number rangesCount, Number ranges);

void redCallCopyImageToImage(Number callProceduresAndAddresses, Number calls, Number imageR, Number setTo1, Number imageW, Number setTo01, Number rangesCount, Number ranges);

void redCallCopyArrayToImage(Number callProceduresAndAddresses, Number calls, Number arrayR, Number imageW, Number setTo1, Number rangesCount, Number ranges);

void redCallCopyImageToArray(Number callProceduresAndAddresses, Number calls, Number imageR, Number setTo1, Number arrayW, Number rangesCount, Number ranges);

void redCallProcedure(Number callProceduresAndAddresses, Number calls, Number vertexCount, Number instanceCount, Number vertexFirst, Number instanceFirst);

void redCallProcedureIndexed(Number callProceduresAndAddresses, Number calls, Number indexCount, Number instanceCount, Number indexFirst, Number vertexBase, Number instanceFirst);

void redCallProcedureCompute(Number callProceduresAndAddresses, Number calls, Number workgroupsCountX, Number workgroupsCountY, Number workgroupsCountZ);

void redCallSetProcedure(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedure);

void redCallSetProcedureIndices(Number callProceduresAndAddresses, Number calls, Number array, Number setTo0, Number setTo1);

void redCallSetProcedureParametersVariables(Number callProceduresAndAddresses, Number calls, Number procedureParameters, Number visibleToStages, Number variablesBytesFirst, Number dataBytesCount, Number data);

void redCallSetProcedureParametersStructs(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedureParameters, Number procedureParametersDeclarationStructsDeclarationsFirst, Number structsCount, Number structs, Number setTo0, Number setTo00);

void redCallSetProcedureParametersHandles(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedureParameters, Number procedureParametersDeclarationStructsDeclarationsCount, Number handlesCount, Number handles);

void redCallSetDynamicDepthBias(Number callProceduresAndAddresses, Number calls, Number constantFactor, Number clamp, Number slopeFactor);

void redCallSetDynamicDepthBounds(Number callProceduresAndAddresses, Number calls, Number min, Number max);

void redCallSetDynamicStencilCompareMask(Number callProceduresAndAddresses, Number calls, Number face, Number compareMask);

void redCallSetDynamicStencilWriteMask(Number callProceduresAndAddresses, Number calls, Number face, Number writeMask);

void redCallSetDynamicStencilReference(Number callProceduresAndAddresses, Number calls, Number face, Number reference);

void redCallSetDynamicBlendConstants(Number callProceduresAndAddresses, Number calls, Number blendConstants);

void redCallSetDynamicViewport(Number callProceduresAndAddresses, Number calls, Number x, Number y, Number width, Number height, Number depthMin, Number depthMax);

void redCallSetDynamicScissor(Number callProceduresAndAddresses, Number calls, Number x, Number y, Number width, Number height);

void redCallSetStructsMemory(Number callProceduresAndAddresses, Number calls, Number structsMemory, Number structsMemorySamplers);

void redCallSetProcedureParameters(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedureParameters);

void redCallSetProcedureOutput(Number callProceduresAndAddresses, Number calls, Number outputDeclaration, Number output, Number inlineOutput, Number outputWidth, Number outputHeight, Bool outputDepthStencilEnable, Number outputColorsCount, Number depthClearValue, Number stencilClearValue, Number colorsClearValuesFloat, Number colorsClearValuesSint, Number colorsClearValuesUint);

void redCallEndProcedureOutput(Number callProceduresAndAddresses, Number calls);

void redCallUsageAliasOrderBarrier(Number callProceduresAndAddresses, Number calls, Number context, Number arrayUsagesCount, Number arrayUsages, Number imageUsagesCount, Number imageUsages, Number aliasesCount, Number aliases, Number ordersCount, Number orders, Bool dependencyByRegion);

void redCallMark(Number callProceduresAndAddresses, Number calls, String mark);

void redCallMarkSet(Number callProceduresAndAddresses, Number calls, String mark);

void redCallMarkEnd(Number callProceduresAndAddresses, Number calls);

void redQueueSubmit(Number context, Number gpuHandle, Number queue, Number timelinesCount, Number timelines, Number signalCpuSignal, Number outStatuses);

void redMark(String mark);

void redMarkSet(String mark);

void redMarkEnd();

Number redCreateProcedureComputingLanguage(Number context, Number gpuHandle, String handleName, Number procedureCache, Number procedureParameters, String gpuCodeMainProcedureName, Number gpuCode, Number stateExtension, Number outStatuses) /* -> Number procedureHandle */;

Number redCreateArrayTimestamp(Number context, Number gpuHandle, String handleName, Number count, Number outStatuses) /* -> Number arrayTimestampHandle */;

void redDestroyArrayTimestamp(Number context, Number gpuHandle, Number arrayTimestamp);

void redCallArrayTimestampWrite(Number calls, Number context, Number arrayTimestamp, Number index);

void redArrayTimestampRead(Number context, Number gpuHandle, Number arrayTimestamp, Number rangeFirst, Number rangeCount, Number out64BitTicksCounts, Number outStatuses);

Number getRrtStructsCount() /* -> Number count */;

String getRrtStructName(Number index) /* -> String name */;

Number getRrtStructMembersCount() /* -> Number count */;

String getRrtStructMemberName(Number index) /* -> String name */;

Number rrtStructSizeof(String structName) /* -> Number bytesCount */;

Number rrtStructMemberSizeof(String structName, String structMemberName) /* -> Number bytesCount */;

Number rrtStructMemberOffsetof(String structName, String structMemberName) /* -> Number bytesFirst */;

Number rrtStructMemberTypeof(String structName, String structMemberName) /* -> Number structMemberType */;

Number rrtCreateContext(Number apiVersion, Number api, Number outContext) /* -> Number rrerror */;

Number rrtDestroyContext(Number context) /* -> Number rrerror */;

Number rrtSetLogLevel(Number logLevel) /* -> Number rrerror */;

Number rrtSetLogFile(String filename) /* -> Number rrerror */;

Number rrtCmdBuildGeometry(Number context, Number buildOperation, Number buildInput, Number buildOptions, Number temporaryBuffer, Number geometryBuffer, Number commandStream) /* -> Number rrerror */;

Number rrtGetGeometryBuildMemoryRequirements(Number context, Number buildInput, Number buildOptions, Number outMemoryRequirements) /* -> Number rrerror */;

Number rrtCmdBuildScene(Number context, Number buildInput, Number buildOptions, Number temporaryBuffer, Number sceneBuffer, Number commandStream) /* -> Number rrerror */;

Number rrtGetSceneBuildMemoryRequirements(Number context, Number buildInput, Number buildOptions, Number outMemoryRequirements) /* -> Number rrerror */;

Number rrtCmdIntersect(Number context, Number sceneBuffer, Number query, Number rays, Number rayCount, Number indirectRayCount, Number queryOutput, Number hits, Number scratch, Number commandStream) /* -> Number rrerror */;

Number rrtGetTraceMemoryRequirements(Number context, Number rayCount, Number outScratchSize) /* -> Number rrerror */;

Number rrtAllocateCommandStream(Number context, Number outCommandStream) /* -> Number rrerror */;

Number rrtReleaseCommandStream(Number context, Number commandStream) /* -> Number rrerror */;

Number rrtSumbitCommandStream(Number context, Number commandStream, Number waitEvent, Number outEvent) /* -> Number rrerror */;

Number rrtReleaseEvent(Number context, Number event) /* -> Number rrerror */;

Number rrtWaitEvent(Number context, Number event) /* -> Number rrerror */;

Number rrtReleaseDevicePtr(Number context, Number devicePointer) /* -> Number rrerror */;

Number rrtReleaseExternalCommandStream(Number context, Number commandStream) /* -> Number rrerror */;

Number rrtGetDevicePtrFromVkBuffer(Number context, Number resource, Number offset, Number outDevicePointer) /* -> Number rrerror */;

Number rrtCreateContextVk(Number apiVersion, Number device, Number physicalDevice, Number commandQueue, Number queueFamilyIndex, Number outContext) /* -> Number rrerror */;

Number rrtGetCommandStreamFromVkCommandBuffer(Number context, Number commandBuffer, Number outCommandStream) /* -> Number rrerror */;

Number rrtAllocateDeviceBuffer(Number context, Number size, Number outDevicePointer);

Number rrtMapDevicePtr(Number context, Number devicePointer, Number outMappingPointer) /* -> Number rrerror */;

Number rrtUnmapDevicePtr(Number context, Number devicePointer, Number outMappingPointer) /* -> Number rrerror */;

void onRerunCallRedCpuSignalWait(Number context, Number gpuHandle, Number handle);

void onRerunCallRedMemoryFree(Number context, Number gpuHandle, Number handle);

void onRerunCallRedStructsMemoryFree(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyContext(Number context);

void onRerunCallRedDestroyArray(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyImage(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroySampler(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyTexture(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyGpuCode(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyOutputDeclaration(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyStructDeclaration(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyProcedureParameters(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyProcedureCache(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyProcedure(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyOutput(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyCpuSignal(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyGpuSignal(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyGpuToCpuSignal(Number context, Number gpuHandle, Number handle);

void onRerunCallRedDestroyCalls(Number context, Number gpuHandle, Number callsHandle, Number callsMemoryHandle);

void onRerunCallRedDestroyArrayTimestamp(Number context, Number gpuHandle, Number handle);

void onRerunCallRrtWaitEvent(Number rrcontext, Number rrevent);

void onRerunCallRrtDestroyContext(Number rrcontext);

void onRerunCallRrtReleaseCommandStream(Number rrcontext, Number rrcommandStream);

void onRerunCallRrtReleaseEvent(Number rrcontext, Number rrevent);

void onRerunCallRrtReleaseDevicePtr(Number rrcontext, Number rrdevicePointer);

void onRerunCallRrtReleaseExternalCommandStream(Number rrcontext, Number rrcommandStream);

void onRerunCallRrtUnmapDevicePtr(Number rrcontext, Number rrdevicePointer, Number outMappingPointer);

Number getXatlasStructsCount() /* -> Number count */;

String getXatlasStructName(Number index) /* -> String name */;

Number getXatlasStructMembersCount() /* -> Number count */;

String getXatlasStructMemberName(Number index) /* -> String name */;

Number xatlasStructSizeof(String structName) /* -> Number bytesCount */;

Number xatlasStructMemberSizeof(String structName, String structMemberName) /* -> Number bytesCount */;

Number xatlasStructMemberOffsetof(String structName, String structMemberName) /* -> Number bytesFirst */;

Number xatlasStructMemberTypeof(String structName, String structMemberName) /* -> Number structMemberType */;

void xatlasMeshDeclInit(Number pointerToXatlasMeshDecl);

void xatlasUvMeshDeclInit(Number pointerToXatlasUvMeshDecl);

void xatlasChartOptionsInit(Number pointerToXatlasChartOptions);

void xatlasPackOptionsInit(Number pointerToXatlasPackOptions);

Number xatlasCreate() /* -> Number xatlas */;

void xatlasDestroy(Number xatlas);

Number xatlasAddMesh(Number xatlas, Number pointerToXatlasMeshDecl, Number meshCountHint) /* -> Number status */;

void xatlasAddMeshJoin(Number xatlas);

Number xatlasAddUvMesh(Number xatlas, Number pointerToXatlasUvMeshDecl) /* -> Number status */;

void xatlasComputeCharts(Number xatlas, Number pointerToXatlasChartOptions);

void xatlasPackCharts(Number xatlas, Number pointerToXatlasPackOptions);

void xatlasGenerate(Number xatlas, Number pointerToXatlasChartOptions, Number pointerToXatlasPackOptions);

void onRerunCallXatlasDestroy(Number xatlas);

Number fbxNew(String label) /* -> Number handle */;

Number fbxNewFromFile(String label, String filepath) /* -> Number handle */;

void fbxDelete(String label);

void fbxDeleteAll();

Number fbxGetHandle(String label) /* -> Number handle */;

void fbxCopyToFbx(Number handleCopyFrom, Number handleCopyTo);

void fbxClear(Number handle);

void fbxEarlyUpdate(Number handle);

void fbxLateUpdate(Number handle);

Number fbxGetMeshesCount(Number handle) /* -> Number count */;

Number fbxGetMesh(Number handle, Number meshIndex) /* -> Number meshHandle */;

String fbxGetMeshName(Number handle, Number meshIndex) /* -> String meshName */;

Number fbxGetRootBonesCount(Number handle) /* -> Number count */;

Number fbxGetRootBone(Number handle, Number rootBoneIndex) /* -> Number boneHandle */;

String fbxBoneGetName(Number handle) /* -> String boneName */;

Number fbxBoneGetChildBonesCount(Number handle) /* -> Number count */;

Number fbxBoneGetChildBone(Number handle, Number childBoneIndex) /* -> Number boneHandle */;

Number fbxBoneGetChildBoneByNameRecursively(Number handle, String boneName) /* -> Number boneHandle */;

NumberArray fbxBoneGetVector(Number handle) /* -> Number position [3] {x, y, z} */;

NumberArray fbxBoneGetVersor(Number handle) /* -> Number quaternion [4] {x, y, z, w} */;

NumberArray fbxBoneGetScale(Number handle) /* -> Number scale [3] {x, y, z} */;

NumberArray fbxBoneGetSideVector(Number handle) /* -> Number sideVector [3] {x, y, z} */;

NumberArray fbxBoneGetUpVector(Number handle) /* -> Number upVector [3] {x, y, z} */;

NumberArray fbxBoneGetLookAtVector(Number handle) /* -> Number lookAtVector [3] {x, y, z} */;

void fbxBoneGetTransformMatrix(Number handle, Number outPointer);

void fbxBoneSetVector(Number handle, Number x, Number y, Number z);

void fbxBoneSetVersor(Number handle, Number x, Number y, Number z, Number w);

void fbxBoneSetScale(Number handle, Number x, Number y, Number z);

void fbxBoneRotate(Number handle, Number rotationX, Number rotationY, Number rotationZ, Number rotationDeg);

void fbxBoneLookAt(Number handle, Number x, Number y, Number z, Number upX, Number upY, Number upZ);