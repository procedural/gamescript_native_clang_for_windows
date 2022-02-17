#ifdef __cplusplus
extern "C" {
#endif

void * _gsCProcedurePrintConsole(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePrintDraw(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowSetTitle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowGetWidth(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowGetHeight(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowSetWidthHeight(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowSetFullscreen(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowIsFocused(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowIsHovered(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowIsMinimized(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowIsHidden(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowHide(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowShow(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureWindowRequestAttention(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawPoint(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawLine(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawTriangle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawTriangleWireframe(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawSphere(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawSphereWireframe(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawDebugText(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDrawDebugTextAtPoint(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureIsRerun(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetCurrentFrame(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetCurrentFrameThread2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetCurrentFrame(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetCurrentFrameThread2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRandomNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetExeDirectoryPath(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureIsLinux(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureIsWindows(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureIsInGameMode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraDefaultControlDisable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraDefaultControlEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraDefaultControlForceEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraDefaultControlIsEnabled(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetMoveSpeed(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetRollSpeed(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetMouseSensitivity(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetVersor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetVersor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraRotate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraLookAt(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetFOV(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetNearClip(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetFarClip(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetProjectionMode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetAspectRatio(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetForceAspectRatio(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetLensOffset(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetupPerspective(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetupOffAxisViewPortal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetVFlip(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraScreenToWorld(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraWorldToScreen(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetSideVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetUpVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetLookAtVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetProjectionMatrix(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetModelViewMatrix(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraGetModelViewProjectionMatrix(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDefaultCameraSetControlKeys(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetBackgroundColor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetViewport(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureAlphaBlendingEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureAlphaBlendingDisable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBlendModeEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBlendModeDisable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDepthTestEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDepthTestDisable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureCullingEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureCullingDisable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureClear(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureClearAlpha(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureClearDepth(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSaveScreenRawToMemory(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayNew8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayPersistentNew8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayPersistentDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayPersistentDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayGetBytesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayGetPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayPersistentGetBytesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalArrayPersistentGetPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalSharedArrayPersistentNew8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalSharedArrayPersistentGetBytesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalSharedArrayPersistentGetPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetBool(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetSubstring(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetInteger8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetUnsignedInteger8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetInteger16Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetUnsignedInteger16Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetNumber64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetInteger64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetAtOffsetUnsignedInteger64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetBool(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetStringExcludingNullChar(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetSubstring(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetInteger8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetUnsignedInteger8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetInteger16Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetUnsignedInteger16Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetNumber64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetInteger64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetAtOffsetUnsignedInteger64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetRaw8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetRaw16Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetRaw32Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetRaw64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetRaw8Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetRaw16Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetRaw32Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerSetRaw64Bit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerIsNull(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerGetNull(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointersAreEqual(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerOffsetByBytes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedurePointerDrawPixels(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayPersistentNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayPersistentDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayPersistentDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalDynamicArrayPersistentGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDynamicArrayGet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDynamicArraySet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDynamicArrayAppend(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDynamicArrayRemoveAt(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDynamicArrayRemoveLast(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureDynamicArrayGetSize(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMemset(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMemcpy(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMemcmp(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadSafeMemset(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadSafeMemcpy(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadSafeMemcmp(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadWaitForEqualUint64Value(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadWaitForEqualOrMoreThanUint64Value(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadWaitForThread2FrameToFinish(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThreadWaitForThread1FrameToFinish(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureStrlenWithNullChar(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureKeyboardGetGlfwKeyEvent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureKeyboardGetGlfwKeyModifiers(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureKeyboardGetGlfwCodepointString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGlfwSetInputMode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseSetXY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetPreviousX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetPreviousY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetMoveEvent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetButtonIsPressed(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetButtonIsPressedAndHeld(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetButtonIsReleased(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMouseGetWheelScroll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGamepadIsPresent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGamepadGet15Buttons6AxesNumbers(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGamepadGetName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGamepadGetGUID(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGamepadUpdateGamecontrollerdbTxt(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBoolToNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBoolToString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw8BitInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw8BitUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw16BitInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw16BitUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw32BitInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw32BitUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw32BitFloat(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw64BitInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberFromRaw64BitUnsignedInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberToBool(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberToString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberToBinaryString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureNumberWholePartToString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureStringCharToNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureStringToNumberArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureInterpretStringToInteger(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureInterpretStringToFloat(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureInterpretStringToDouble(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureStringReadFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureStringWriteToFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureStringAppendToFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBinaryGetByteSizeOfFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBinaryReadFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureBinaryWriteToFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetClipboardString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetClipboardString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoSetMode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoGetVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoGetVersor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoGetScale(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoSetVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoSetVersor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoSetScale(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoSetDrawScale(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoSetDrawColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGizmoDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLastFrameTime(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetSystemTimeMillis(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetSystemTimeMicros(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetUnixTime(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferBegin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferDraw(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferClear(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferCopyToImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFramebufferDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshPersistentNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshPersistentDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshPersistentDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshPersistentGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshIsUsingColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshIsUsingTextures(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshIsUsingIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshEnableColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshEnableTextures(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshEnableIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDisableColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDisableTextures(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDisableIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHasVertices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHasColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHasTexCoords(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHasIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetVerticesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetColorsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetTexCoordsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetIndicesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHaveVerticesChanged(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHaveColorsChanged(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHaveTexCoordsChanged(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshHaveIndicesChanged(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshAddVertex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshAddColor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshAddTexCoord(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshAddIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshRemoveVertex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshRemoveColor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshRemoveTexCoord(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshRemoveIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshClear(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshClearVertices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshClearColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshClearTexCoords(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshClearIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetVerticesPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetColorsPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetTexCoordsPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshGetIndicesPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshMergeDuplicateVertices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshSetupIndicesAuto(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshAddTriangle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDraw(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDrawWithColor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDrawDebugVertices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDrawDebugColors(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDrawDebugTexCoords(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDrawDebugIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshDrawDebugRayTraceIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshImporterGetMeshesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshImporterGetMeshName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshImporterGetMesh(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshImporterDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureMeshImporterDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImagePersistentNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageNewFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImagePersistentNewFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImagePersistentDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImagePersistentDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImagePersistentGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageLoadFromMemory(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageClear(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageHasMipmap(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageMipmapDisable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageMipmapEnable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageMipmapGenerate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageSetTextureMinMagFilter(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageSetTextureWrap(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageSetTextureMaxAnisotropy(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetWidth(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetHeight(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetBitsPerPixel(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetImageType(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetPixelsPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGetColor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageSetColor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageGammaCorrect(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageUpdate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageBind(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImageUnbind(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderBegin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderSetUniform4f(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderSetUniform4fv(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderSetUniformMatrix4f(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderSetUniformImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureShaderDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerPersistentNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerPersistentDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerPersistentDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerPersistentGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerLoad(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerUnload(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerPlay(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerStop(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetVolume(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetPan(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetSpeed(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetPaused(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetLoop(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetMultiPlay(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetPosition(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerSetPositionMS(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerGetPositionMS(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerGetPosition(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerIsPlaying(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerGetSpeed(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerGetPan(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerGetVolume(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundPlayerIsLoaded(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundSetVolume(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundShutdown(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundStopAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSoundUpdate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiBegin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiWindowBegin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiWindowEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiButton(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiText(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiTextMultiline(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiInputText(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureImguiInputTextMultiline(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureProfileBegin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureProfileEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSystemCommand(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlGetIntegerv(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetUniqueNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetUint64Max(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLibGameHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLibThread2Handle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetGlfwWindowHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLastDragAndDropCounter(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLastDragAndDropFilepathsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLastDragAndDropFilepath(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLastDragAndDropPositionX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetLastDragAndDropPositionY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGithubR_lyehLz4xEncode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGithubR_lyehLz4xDecode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGithubR_lyehLz4xBoundsEncodeOutBytesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGithubR_lyehUlzEncode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGithubR_lyehUlzDecode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGithubR_lyehUlzBoundsEncodeOutBytesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThread2Run(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThread2StopAndWaitFor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureThread2IsRunning(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetGameScriptString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetGameScriptStringForNextFrame(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetGameScriptStringForNextFrameFromPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetThread2ScriptString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetThread2ScriptStringForNextFrame(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureSetThread2ScriptStringForNextFrameFromPointer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureLibGameScriptExternalProcedureReload(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureLibGameScriptExternalProcedureCall2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureLibGameScriptExternalProcedureCall3(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureProgramGetArgumentsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureProgramGetArgument(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureProgramClose(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureAsin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureAcos(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureAtan(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureAtan2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetMeshLabelByMeshIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetMeshLabelByMeshIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetMeshHandleByMeshIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetMeshHandleByMeshIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveVerticesChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveColorsChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveTexCoordsChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveIndicesChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveVerticesChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveColorsChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveTexCoordsChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveIndicesChangedMeshIndexesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveVerticesChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveColorsChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveTexCoordsChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesGetHaveIndicesChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveVerticesChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveColorsChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveTexCoordsChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalMeshesPersistentGetHaveIndicesChangedMeshIndexes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetKeyLabelsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyIsKeyLabelExists(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetKeyLabelByKeyIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetKeyPropertyLabelsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyIsKeyPropertyLabelExists(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetKeyPropertyLabelByPropertyIndex(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyRemoveKey(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyRemoveAllKeys(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyRemoveProperty(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyRemoveAllProperties(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertySetString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertySetNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertySetBool(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetNumber(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGlobalKeyPropertyGetBool(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetSizeOfInBytes(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fSetDefaultInitialize(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fSetInitialize(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fSetLookAtPoint(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fScale(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fTranslate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fRotate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVXX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVXY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVXZ(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVYX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVYY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVYZ(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVZX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVZY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetLVZZ(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetPX(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetPY(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fGetPZ(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fCopyFromArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtAffineSpace3fCopyToArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtCreateDevice(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtDestroyDevice(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewCamera(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewData(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewDataFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewImageFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewTexture(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewMaterial(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewShape(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewLight(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewShapePrimitive(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewLightPrimitive(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtTransformPrimitive(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewScene(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewToneMapper(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewRenderer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtNewFrameBuffer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtGetFrameBufferWidth(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtGetFrameBufferHeight(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtMapFrameBuffer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtUnmapFrameBuffer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSwapBuffers(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtIncRef(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtDecRef(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetBool1(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetBool2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetBool3(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetBool4(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetInt1(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetInt2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetInt3(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetInt4(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetFloat1(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetFloat2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetFloat3(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetFloat4(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetString(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetTexture(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSetTransform(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtClear(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtCommit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtRenderFrame(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtPick(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtInitializeRayStruct(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtInitializeRayStructForCameraPixelSample(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureErtSceneIntersectRayStructToHitStruct(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallErtDecRef(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallErtDestroyDevice(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRedStructsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRedStructName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRedStructMembersCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRedStructMemberName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructSizeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructMemberSizeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructMemberOffsetof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructMemberTypeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateContext(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateContextWithRayTracingFeatureLevel1(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateContextWithRayTracingFeatureLevel2(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedHandleContextGetProcAddr(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryGetBudget(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryAllocate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryAllocateMappable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryFree(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemorySet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryMap(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryUnmap(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryNonCoherentFlush(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMemoryNonCoherentInvalidate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructsMemoryAllocate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructsMemoryAllocateSamplers(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructsMemorySuballocateStructs(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructsMemoryReset(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructsMemoryFree(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedStructsSet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateSampler(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateTexture(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateGpuCode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateOutputDeclaration(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateStructDeclaration(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateProcedureParameters(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateProcedureCache(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateProcedure(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateProcedureCompute(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateOutput(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateCpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateGpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateGpuToCpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateCalls(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateCallsReusable(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyContext(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroySampler(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyTexture(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyGpuCode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyOutputDeclaration(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyStructDeclaration(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyProcedureParameters(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyProcedureCache(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyProcedure(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyOutput(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyCpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyGpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyGpuToCpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyCalls(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedProcedureCacheGetBlob(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedProcedureCacheMergeCaches(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCpuSignalGetStatus(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCpuSignalWait(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCpuSignalUnsignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedGpuToCpuSignalGetStatus(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedGpuToCpuSignalUnsignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallsSet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallsEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedGetCallProceduresAndAddresses(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallGpuToCpuSignalSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallCopyArrayToArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallCopyImageToImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallCopyArrayToImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallCopyImageToArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallProcedure(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallProcedureIndexed(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallProcedureCompute(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedure(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedureIndices(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedureParametersVariables(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedureParametersStructs(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedureParametersHandles(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicDepthBias(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicDepthBounds(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicStencilCompareMask(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicStencilWriteMask(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicStencilReference(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicBlendConstants(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicViewport(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetDynamicScissor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetStructsMemory(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedureParameters(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallSetProcedureOutput(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallEndProcedureOutput(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallUsageAliasOrderBarrier(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallMark(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallMarkSet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallMarkEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedQueueSubmit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMark(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMarkSet(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedMarkEnd(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateProcedureComputingLanguage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCreateArrayTimestamp(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedDestroyArrayTimestamp(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedCallArrayTimestampWrite(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRedArrayTimestampRead(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRrtStructsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRrtStructName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRrtStructMembersCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetRrtStructMemberName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtStructSizeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtStructMemberSizeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtStructMemberOffsetof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtStructMemberTypeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtCreateContext(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtDestroyContext(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtSetLogLevel(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtSetLogFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtCmdBuildGeometry(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtGetGeometryBuildMemoryRequirements(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtCmdBuildScene(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtGetSceneBuildMemoryRequirements(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtCmdIntersect(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtGetTraceMemoryRequirements(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtAllocateCommandStream(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtReleaseCommandStream(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtSumbitCommandStream(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtReleaseEvent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtWaitEvent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtReleaseDevicePtr(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtReleaseExternalCommandStream(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtGetDevicePtrFromVkBuffer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtCreateContextVk(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtGetCommandStreamFromVkCommandBuffer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtAllocateDeviceBuffer(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtMapDevicePtr(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureRrtUnmapDevicePtr(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedCpuSignalWait(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedMemoryFree(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedStructsMemoryFree(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyContext(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyArray(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyImage(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroySampler(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyTexture(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyGpuCode(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyOutputDeclaration(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyStructDeclaration(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyProcedureParameters(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyProcedureCache(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyProcedure(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyOutput(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyCpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyGpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyGpuToCpuSignal(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyCalls(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRedDestroyArrayTimestamp(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtDestroyContext(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtReleaseCommandStream(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtReleaseEvent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtWaitEvent(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtReleaseDevicePtr(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtReleaseExternalCommandStream(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallRrtUnmapDevicePtr(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetXatlasStructsCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetXatlasStructName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetXatlasStructMembersCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureGetXatlasStructMemberName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasStructSizeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasStructMemberSizeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasStructMemberOffsetof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasStructMemberTypeof(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasMeshDeclInit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasUvMeshDeclInit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasChartOptionsInit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasPackOptionsInit(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasCreate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasDestroy(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasAddMesh(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasAddMeshJoin(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasAddUvMesh(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasComputeCharts(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasPackCharts(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureXatlasGenerate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureOnRerunCallXatlasDestroy(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxNew(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxNewFromFile(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxDelete(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxDeleteAll(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxGetHandle(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxCopyToFbx(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxClear(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxEarlyUpdate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxLateUpdate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxGetMeshesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxGetMesh(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxGetMeshName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxGetRootBonesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxGetRootBone(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetName(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetChildBonesCount(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetChildBone(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetChildBoneByNameRecursively(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetVersor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetScale(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetSideVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetUpVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetLookAtVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneGetTransformMatrix(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneSetVector(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneSetVersor(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneSetScale(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneRotate(void * gs, void * data, int argc, void ** args);
void * _gsCProcedureFbxBoneLookAt(void * gs, void * data, int argc, void ** args);

#ifdef __cplusplus
}
#endif

#include "libgamescriptnative.h"
#include <algorithm>

typedef union _GsUnionConverter {
  unsigned char   boolean;
  Number          number;
  Float           sfloat;
  Integer         integer;
  UnsignedInteger unsignedInteger;
  void *          voidpointer;
} _GsUnionConverter;

static inline void * _gsVoidPointerFromBool(Bool x) {
  _GsUnionConverter c;
  c.boolean = (x == true ? 1 : 0);
  return c.voidpointer;
}

static inline void * _gsVoidPointerFromNumber(Number x) {
  _GsUnionConverter c;
  c.number = x;
  return c.voidpointer;
}

static inline Bool _gsBoolFromVoidPointer(void * x) {
  _GsUnionConverter c;
  c.voidpointer = x;
  return (c.boolean == 0 ? false : true);
}

static inline Number _gsNumberFromVoidPointer(void * x) {
  _GsUnionConverter c;
  c.voidpointer = x;
  return c.number;
}

Float asfloat(Float x) {
  return x;
}

Float asfloat(Integer x) {
  _GsUnionConverter c;
  c.integer = x;
  return c.sfloat;
}

Float asfloat(UnsignedInteger x) {
  _GsUnionConverter c;
  c.unsignedInteger = x;
  return c.sfloat;
}

Integer asint(Float x) {
  _GsUnionConverter c;
  c.sfloat = x;
  return c.integer;
}

Integer asint(Integer x) {
  return x;
}

Integer asint(UnsignedInteger x) {
  _GsUnionConverter c;
  c.unsignedInteger = x;
  return c.integer;
}

UnsignedInteger asuint(Float x) {
  _GsUnionConverter c;
  c.sfloat = x;
  return c.unsignedInteger;
}

UnsignedInteger asuint(Integer x) {
  _GsUnionConverter c;
  c.integer = x;
  return c.unsignedInteger;
}

UnsignedInteger asuint(UnsignedInteger x) {
  return x;
}

Number tonumber(Number x) {
  return x;
}

Number tonumber(Float x) {
  return (Number)x;
}

Number tonumber(Integer x) {
  return (Number)x;
}

Number tonumber(UnsignedInteger x) {
  return (Number)x;
}

Float tofloat(Number x) {
  return (Float)x;
}

Float tofloat(Float x) {
  return x;
}

Float tofloat(Integer x) {
  return (Float)x;
}

Float tofloat(UnsignedInteger x) {
  return (Float)x;
}

Integer toint(Number x) {
  return (Integer)x;
}

Integer toint(Float x) {
  return (Integer)x;
}

Integer toint(Integer x) {
  return x;
}

Integer toint(UnsignedInteger x) {
  return (Integer)x;
}

UnsignedInteger touint(Number x) {
  return (UnsignedInteger)x;
}

UnsignedInteger touint(Float x) {
  return (UnsignedInteger)x;
}

UnsignedInteger touint(Integer x) {
  return (UnsignedInteger)x;
}

UnsignedInteger touint(UnsignedInteger x) {
  return x;
}

Number len(String string) {
  return (Number)string.length();
}

Number len(NumberArray array) {
  return (Number)array.size();
}

Number len(FloatArray array) {
  return (Number)array.size();
}

Number len(IntegerArray array) {
  return (Number)array.size();
}

Number len(UnsignedIntegerArray array) {
  return (Number)array.size();
}

Number len(StringArray array) {
  return (Number)array.size();
}

Number first(NumberArray array) {
  Number value = array.front();
  return value;
}

Float first(FloatArray array) {
  Float value = array.front();
  return value;
}

Integer first(IntegerArray array) {
  Integer value = array.front();
  return value;
}

UnsignedInteger first(UnsignedIntegerArray array) {
  UnsignedInteger value = array.front();
  return value;
}

String first(StringArray array) {
  String value = array.front();
  return value;
}

Number last(NumberArray array) {
  Number value = array.back();
  return value;
}

Float last(FloatArray array) {
  Float value = array.back();
  return value;
}

Integer last(IntegerArray array) {
  Integer value = array.back();
  return value;
}

UnsignedInteger last(UnsignedIntegerArray array) {
  UnsignedInteger value = array.back();
  return value;
}

String last(StringArray array) {
  String value = array.back();
  return value;
}

String reverse(String string) {
  std::reverse(string.begin(), string.end());
  return string;
}

NumberArray reverse(NumberArray array) {
  std::reverse(array.begin(), array.end());
  return array;
}

FloatArray reverse(FloatArray array) {
  std::reverse(array.begin(), array.end());
  return array;
}

IntegerArray reverse(IntegerArray array) {
  std::reverse(array.begin(), array.end());
  return array;
}

UnsignedIntegerArray reverse(UnsignedIntegerArray array) {
  std::reverse(array.begin(), array.end());
  return array;
}

StringArray reverse(StringArray array) {
  std::reverse(array.begin(), array.end());
  return array;
}

void append(NumberArray & array, Number element) {
  array.push_back(element);
}

void append(FloatArray & array, Float element) {
  array.push_back(element);
}

void append(IntegerArray & array, Integer element) {
  array.push_back(element);
}

void append(UnsignedIntegerArray & array, UnsignedInteger element) {
  array.push_back(element);
}

void append(StringArray & array, String element) {
  array.push_back(element);
}

Bool remove(NumberArray & array, Number element) {
  return array.erase(std::remove(array.begin(), array.end(), element), array.end()) != array.end();
}

Bool remove(FloatArray & array, Float element) {
  return array.erase(std::remove(array.begin(), array.end(), element), array.end()) != array.end();
}

Bool remove(IntegerArray & array, Integer element) {
  return array.erase(std::remove(array.begin(), array.end(), element), array.end()) != array.end();
}

Bool remove(UnsignedIntegerArray & array, UnsignedInteger element) {
  return array.erase(std::remove(array.begin(), array.end(), element), array.end()) != array.end();
}

Bool remove(StringArray & array, String element) {
  return array.erase(std::remove(array.begin(), array.end(), element), array.end()) != array.end();
}

Bool remove_at(NumberArray & array, Number index) {
  return array.erase(array.begin() + index) != array.end();
}

Bool remove_at(FloatArray & array, Number index) {
  return array.erase(array.begin() + index) != array.end();
}

Bool remove_at(IntegerArray & array, Number index) {
  return array.erase(array.begin() + index) != array.end();
}

Bool remove_at(UnsignedIntegerArray & array, Number index) {
  return array.erase(array.begin() + index) != array.end();
}

Bool remove_at(StringArray & array, Number index) {
  return array.erase(array.begin() + index) != array.end();
}

void printConsole(String string) {
  void * args[] = {
    (void *)string.c_str(),
  };
  _gsCProcedurePrintConsole(0, 0, 0, args);
}

void printDraw(String string) {
  void * args[] = {
    (void *)string.c_str(),
  };
  _gsCProcedurePrintDraw(0, 0, 0, args);
}

void windowSetTitle(String title) {
  void * args[] = {
    (void *)title.c_str(),
  };
  _gsCProcedureWindowSetTitle(0, 0, 0, args);
}

Number windowGetWidth() /* -> Number width */ {
  return _gsNumberFromVoidPointer(_gsCProcedureWindowGetWidth(0, 0, 0, 0));
}

Number windowGetHeight() /* -> Number height */ {
  return _gsNumberFromVoidPointer(_gsCProcedureWindowGetHeight(0, 0, 0, 0));
}

void windowSetWidthHeight(Number width, Number height) {
  void * args[] = {
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
  };
  _gsCProcedureWindowSetWidthHeight(0, 0, 0, args);
}

void windowSetFullscreen(Bool fullscreen) {
  void * args[] = {
    _gsVoidPointerFromBool(fullscreen),
  };
  _gsCProcedureWindowSetFullscreen(0, 0, 0, args);
}

Bool windowIsFocused() /* -> Bool isFocused */ {
  return _gsBoolFromVoidPointer(_gsCProcedureWindowIsFocused(0, 0, 0, 0));
}

Bool windowIsHovered() /* -> Bool isHovered */ {
  return _gsBoolFromVoidPointer(_gsCProcedureWindowIsHovered(0, 0, 0, 0));
}

Bool windowIsMinimized() /* -> Bool isMinimized */ {
  return _gsBoolFromVoidPointer(_gsCProcedureWindowIsMinimized(0, 0, 0, 0));
}

Bool windowIsHidden() /* -> Bool isHidden */ {
  return _gsBoolFromVoidPointer(_gsCProcedureWindowIsHidden(0, 0, 0, 0));
}

void windowHide() {
  _gsCProcedureWindowHide(0, 0, 0, 0);
}

void windowShow() {
  _gsCProcedureWindowShow(0, 0, 0, 0);
}

void windowRequestAttention() {
  _gsCProcedureWindowRequestAttention(0, 0, 0, 0);
}

void drawPoint(String label, Number x, Number y, Number z, Number size, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(size),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawPoint(0, 0, 0, args);
}

void drawLine(String label, Number x0, Number y0, Number z0, Number x1, Number y1, Number z1, Number width, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x0),
    _gsVoidPointerFromNumber(y0),
    _gsVoidPointerFromNumber(z0),
    _gsVoidPointerFromNumber(x1),
    _gsVoidPointerFromNumber(y1),
    _gsVoidPointerFromNumber(z1),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawLine(0, 0, 0, args);
}

void drawTriangle(String label, Number x0, Number y0, Number z0, Number x1, Number y1, Number z1, Number x2, Number y2, Number z2, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x0),
    _gsVoidPointerFromNumber(y0),
    _gsVoidPointerFromNumber(z0),
    _gsVoidPointerFromNumber(x1),
    _gsVoidPointerFromNumber(y1),
    _gsVoidPointerFromNumber(z1),
    _gsVoidPointerFromNumber(x2),
    _gsVoidPointerFromNumber(y2),
    _gsVoidPointerFromNumber(z2),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawTriangle(0, 0, 0, args);
}

void drawTriangleWireframe(String label, Number x0, Number y0, Number z0, Number x1, Number y1, Number z1, Number x2, Number y2, Number z2, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x0),
    _gsVoidPointerFromNumber(y0),
    _gsVoidPointerFromNumber(z0),
    _gsVoidPointerFromNumber(x1),
    _gsVoidPointerFromNumber(y1),
    _gsVoidPointerFromNumber(z1),
    _gsVoidPointerFromNumber(x2),
    _gsVoidPointerFromNumber(y2),
    _gsVoidPointerFromNumber(z2),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawTriangleWireframe(0, 0, 0, args);
}

void drawSphere(Number x, Number y, Number z, Number size, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(size),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawSphere(0, 0, 0, args);
}

void drawSphereWireframe(Number x, Number y, Number z, Number size, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(size),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawSphereWireframe(0, 0, 0, args);
}

void drawDebugText(String label, Number x, Number y, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureDrawDebugText(0, 0, 0, args);
}

void drawDebugTextAtPoint(String label, Number x, Number y, Number z) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureDrawDebugTextAtPoint(0, 0, 0, args);
}

Bool isRerun() /* -> Bool isRerun */ {
  return _gsBoolFromVoidPointer(_gsCProcedureIsRerun(0, 0, 0, 0));
}

Number getCurrentFrame() /* -> Number frame */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetCurrentFrame(0, 0, 0, 0));
}

void setCurrentFrame(Number frame) {
  void * args[] = {
    _gsVoidPointerFromNumber(frame),
  };
  _gsCProcedureSetCurrentFrame(0, 0, 0, args);
}

Number getRandomNumber() /* -> Number number */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetRandomNumber(0, 0, 0, 0));
}

String getExeDirectoryPath() /* -> String path */ {
  const char * output = (const char *)_gsCProcedureGetExeDirectoryPath(0, 0, 0, 0);
  String out = output;
  free((void *)output);
  return out;
}

Bool isLinux() /* -> Bool isLinux */ {
  return _gsBoolFromVoidPointer(_gsCProcedureIsLinux(0, 0, 0, 0));
}

Bool isWindows() /* -> Bool isWindows */ {
  return _gsBoolFromVoidPointer(_gsCProcedureIsWindows(0, 0, 0, 0));
}

Bool isInGameMode() /* -> Bool isInGameMode */ {
  return _gsBoolFromVoidPointer(_gsCProcedureIsInGameMode(0, 0, 0, 0));
}

void defaultCameraDefaultControlDisable() {
  _gsCProcedureDefaultCameraDefaultControlDisable(0, 0, 0, 0);
}

void defaultCameraDefaultControlEnable() {
  _gsCProcedureDefaultCameraDefaultControlEnable(0, 0, 0, 0);
}

void defaultCameraDefaultControlForceEnable() {
  _gsCProcedureDefaultCameraDefaultControlForceEnable(0, 0, 0, 0);
}

Bool defaultCameraDefaultControlIsEnabled() /* -> Bool isEnabled */ {
  return _gsBoolFromVoidPointer(_gsCProcedureDefaultCameraDefaultControlIsEnabled(0, 0, 0, 0));
}

void defaultCameraSetMoveSpeed(Number speed) {
  void * args[] = {
    _gsVoidPointerFromNumber(speed),
  };
  _gsCProcedureDefaultCameraSetMoveSpeed(0, 0, 0, args);
}

void defaultCameraSetRollSpeed(Number speed) {
  void * args[] = {
    _gsVoidPointerFromNumber(speed),
  };
  _gsCProcedureDefaultCameraSetRollSpeed(0, 0, 0, args);
}

void defaultCameraSetMouseSensitivity(Number sensitivity) {
  void * args[] = {
    _gsVoidPointerFromNumber(sensitivity),
  };
  _gsCProcedureDefaultCameraSetMouseSensitivity(0, 0, 0, args);
}

NumberArray defaultCameraGetVector() /* -> Number position [3] {x, y, z} */ {
  Number * output = (Number *)_gsCProcedureDefaultCameraGetVector(0, 0, 0, 0);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray defaultCameraGetVersor() /* -> Number quaternion [4] {x, y, z, w} */ {
  Number * output = (Number *)_gsCProcedureDefaultCameraGetVersor(0, 0, 0, 0);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 4); }
  free(output);
  return out;
}

void defaultCameraSetVector(Number x, Number y, Number z) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureDefaultCameraSetVector(0, 0, 0, args);
}

void defaultCameraSetVersor(Number x, Number y, Number z, Number w) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(w),
  };
  _gsCProcedureDefaultCameraSetVersor(0, 0, 0, args);
}

void defaultCameraRotate(Number rotationAxisX, Number rotationAxisY, Number rotationAxisZ, Number rotationAngleDeg) {
  void * args[] = {
    _gsVoidPointerFromNumber(rotationAxisX),
    _gsVoidPointerFromNumber(rotationAxisY),
    _gsVoidPointerFromNumber(rotationAxisZ),
    _gsVoidPointerFromNumber(rotationAngleDeg),
  };
  _gsCProcedureDefaultCameraRotate(0, 0, 0, args);
}

void defaultCameraLookAt(Number x, Number y, Number z, Number upX, Number upY, Number upZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(upX),
    _gsVoidPointerFromNumber(upY),
    _gsVoidPointerFromNumber(upZ),
  };
  _gsCProcedureDefaultCameraLookAt(0, 0, 0, args);
}

void defaultCameraSetFOV(Number fov) {
  void * args[] = {
    _gsVoidPointerFromNumber(fov),
  };
  _gsCProcedureDefaultCameraSetFOV(0, 0, 0, args);
}

void defaultCameraSetNearClip(Number near) {
  void * args[] = {
    _gsVoidPointerFromNumber(near),
  };
  _gsCProcedureDefaultCameraSetNearClip(0, 0, 0, args);
}

void defaultCameraSetFarClip(Number far) {
  void * args[] = {
    _gsVoidPointerFromNumber(far),
  };
  _gsCProcedureDefaultCameraSetFarClip(0, 0, 0, args);
}

void defaultCameraSetProjectionMode(Number mode) {
  void * args[] = {
    _gsVoidPointerFromNumber(mode),
  };
  _gsCProcedureDefaultCameraSetProjectionMode(0, 0, 0, args);
}

void defaultCameraSetAspectRatio(Number aspectRatio) {
  void * args[] = {
    _gsVoidPointerFromNumber(aspectRatio),
  };
  _gsCProcedureDefaultCameraSetAspectRatio(0, 0, 0, args);
}

void defaultCameraSetForceAspectRatio(Bool forceAspectRatio) {
  void * args[] = {
    _gsVoidPointerFromBool(forceAspectRatio),
  };
  _gsCProcedureDefaultCameraSetForceAspectRatio(0, 0, 0, args);
}

void defaultCameraSetLensOffset(Number lensOffsetX, Number lensOffsetY) {
  void * args[] = {
    _gsVoidPointerFromNumber(lensOffsetX),
    _gsVoidPointerFromNumber(lensOffsetY),
  };
  _gsCProcedureDefaultCameraSetLensOffset(0, 0, 0, args);
}

void defaultCameraSetupPerspective(Bool vflip, Number fov, Number nearDist, Number farDist, Number lensOffsetX, Number lensOffsetY) {
  void * args[] = {
    _gsVoidPointerFromBool(vflip),
    _gsVoidPointerFromNumber(fov),
    _gsVoidPointerFromNumber(nearDist),
    _gsVoidPointerFromNumber(farDist),
    _gsVoidPointerFromNumber(lensOffsetX),
    _gsVoidPointerFromNumber(lensOffsetY),
  };
  _gsCProcedureDefaultCameraSetupPerspective(0, 0, 0, args);
}

void defaultCameraSetupOffAxisViewPortal(Number topLeftX, Number topLeftY, Number topLeftZ, Number bottomLeftX, Number bottomLeftY, Number bottomLeftZ, Number bottomRightX, Number bottomRightY, Number bottomRightZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(topLeftX),
    _gsVoidPointerFromNumber(topLeftY),
    _gsVoidPointerFromNumber(topLeftZ),
    _gsVoidPointerFromNumber(bottomLeftX),
    _gsVoidPointerFromNumber(bottomLeftY),
    _gsVoidPointerFromNumber(bottomLeftZ),
    _gsVoidPointerFromNumber(bottomRightX),
    _gsVoidPointerFromNumber(bottomRightY),
    _gsVoidPointerFromNumber(bottomRightZ),
  };
  _gsCProcedureDefaultCameraSetupOffAxisViewPortal(0, 0, 0, args);
}

void defaultCameraSetVFlip(Bool vflip) {
  void * args[] = {
    _gsVoidPointerFromBool(vflip),
  };
  _gsCProcedureDefaultCameraSetVFlip(0, 0, 0, args);
}

NumberArray defaultCameraScreenToWorld(Number screenX, Number screenY, Number screenZ) /* -> Number worldPosition [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(screenX),
    _gsVoidPointerFromNumber(screenY),
    _gsVoidPointerFromNumber(screenZ),
  };
  Number * output = (Number *)_gsCProcedureDefaultCameraScreenToWorld(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray defaultCameraWorldToScreen(Number worldX, Number worldY, Number worldZ) /* -> Number screenPosition [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(worldX),
    _gsVoidPointerFromNumber(worldY),
    _gsVoidPointerFromNumber(worldZ),
  };
  Number * output = (Number *)_gsCProcedureDefaultCameraWorldToScreen(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray defaultCameraGetSideVector() /* -> Number sideVector [3] {x, y, z} */ {
  Number * output = (Number *)_gsCProcedureDefaultCameraGetSideVector(0, 0, 0, 0);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray defaultCameraGetUpVector() /* -> Number upVector [3] {x, y, z} */ {
  Number * output = (Number *)_gsCProcedureDefaultCameraGetUpVector(0, 0, 0, 0);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray defaultCameraGetLookAtVector() /* -> Number lookAtVector [3] {x, y, z} */ {
  Number * output = (Number *)_gsCProcedureDefaultCameraGetLookAtVector(0, 0, 0, 0);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

void defaultCameraGetProjectionMatrix(Number outPointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
  };
  _gsCProcedureDefaultCameraGetProjectionMatrix(0, 0, 0, args);
}

void defaultCameraGetModelViewMatrix(Number outPointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
  };
  _gsCProcedureDefaultCameraGetModelViewMatrix(0, 0, 0, args);
}

void defaultCameraGetModelViewProjectionMatrix(Number outPointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
  };
  _gsCProcedureDefaultCameraGetModelViewProjectionMatrix(0, 0, 0, args);
}

void defaultCameraSetControlKeys(Number up, Number down, Number left, Number right, Number forward, Number backward, Number rollLeft, Number rollRight, Number rollReset) {
  void * args[] = {
    _gsVoidPointerFromNumber(up),
    _gsVoidPointerFromNumber(down),
    _gsVoidPointerFromNumber(left),
    _gsVoidPointerFromNumber(right),
    _gsVoidPointerFromNumber(forward),
    _gsVoidPointerFromNumber(backward),
    _gsVoidPointerFromNumber(rollLeft),
    _gsVoidPointerFromNumber(rollRight),
    _gsVoidPointerFromNumber(rollReset),
  };
  _gsCProcedureDefaultCameraSetControlKeys(0, 0, 0, args);
}

void setBackgroundColor(Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureSetBackgroundColor(0, 0, 0, args);
}

void setViewport(Number x, Number y, Number width, Number height, Bool vflip) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromBool(vflip),
  };
  _gsCProcedureSetViewport(0, 0, 0, args);
}

void alphaBlendingEnable() {
  _gsCProcedureAlphaBlendingEnable(0, 0, 0, 0);
}

void alphaBlendingDisable() {
  _gsCProcedureAlphaBlendingDisable(0, 0, 0, 0);
}

void blendModeEnable(Number mode) {
  void * args[] = {
    _gsVoidPointerFromNumber(mode),
  };
  _gsCProcedureBlendModeEnable(0, 0, 0, args);
}

void blendModeDisable() {
  _gsCProcedureBlendModeDisable(0, 0, 0, 0);
}

void depthTestEnable() {
  _gsCProcedureDepthTestEnable(0, 0, 0, 0);
}

void depthTestDisable() {
  _gsCProcedureDepthTestDisable(0, 0, 0, 0);
}

void cullingEnable(Number mode) {
  void * args[] = {
    _gsVoidPointerFromNumber(mode),
  };
  _gsCProcedureCullingEnable(0, 0, 0, args);
}

void cullingDisable() {
  _gsCProcedureCullingDisable(0, 0, 0, 0);
}

void clear(Number r0to1, Number g0to1, Number b0to1, Number a0to1) {
  void * args[] = {
    _gsVoidPointerFromNumber(r0to1),
    _gsVoidPointerFromNumber(g0to1),
    _gsVoidPointerFromNumber(b0to1),
    _gsVoidPointerFromNumber(a0to1),
  };
  _gsCProcedureClear(0, 0, 0, args);
}

void clearAlpha() {
  _gsCProcedureClearAlpha(0, 0, 0, 0);
}

void clearDepth() {
  _gsCProcedureClearDepth(0, 0, 0, 0);
}

void saveScreenRawToMemory(Number x, Number y, Number width, Number height, Number out8BitRGBAPixels) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromNumber(out8BitRGBAPixels),
  };
  _gsCProcedureSaveScreenRawToMemory(0, 0, 0, args);
}

Number globalArrayNew8Bit(String label, Number count) /* -> Number pointer */ {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(count),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalArrayNew8Bit(0, 0, 0, args));
}

Number globalArrayPersistentNew8Bit(String label, Number count) /* -> Number pointer */ {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(count),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalArrayPersistentNew8Bit(0, 0, 0, args));
}

void globalArrayDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureGlobalArrayDelete(0, 0, 0, args);
}

void globalArrayPersistentDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureGlobalArrayPersistentDelete(0, 0, 0, args);
}

void globalArrayDeleteAll() {
  _gsCProcedureGlobalArrayDeleteAll(0, 0, 0, 0);
}

void globalArrayPersistentDeleteAll() {
  _gsCProcedureGlobalArrayPersistentDeleteAll(0, 0, 0, 0);
}

Number globalArrayGetBytesCount(String label) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalArrayGetBytesCount(0, 0, 0, args));
}

Number globalArrayGetPointer(String label) /* -> Number pointer */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalArrayGetPointer(0, 0, 0, args));
}

Number globalArrayPersistentGetBytesCount(String label) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalArrayPersistentGetBytesCount(0, 0, 0, args));
}

Number globalArrayPersistentGetPointer(String label) /* -> Number pointer */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalArrayPersistentGetPointer(0, 0, 0, args));
}

Number globalSharedArrayPersistentNew8Bit(String label, Number count) /* -> Number pointer */ {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(count),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalSharedArrayPersistentNew8Bit(0, 0, 0, args));
}

Number globalSharedArrayPersistentGetBytesCount(String label) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalSharedArrayPersistentGetBytesCount(0, 0, 0, args));
}

Number globalSharedArrayPersistentGetPointer(String label) /* -> Number pointer */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalSharedArrayPersistentGetPointer(0, 0, 0, args));
}

Bool pointerGetBool(Number pointerTo8BitBools, Number index) /* -> Bool value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo8BitBools),
    _gsVoidPointerFromNumber(index),
  };
  return _gsBoolFromVoidPointer(_gsCProcedurePointerGetBool(0, 0, 0, args));
}

String pointerGetString(Number pointer) /* -> String string */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
  };
  const char * output = (const char *)_gsCProcedurePointerGetString(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

String pointerGetSubstring(Number pointer, Number pointerCharsFirst, Number charsCount) /* -> String string */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerCharsFirst),
    _gsVoidPointerFromNumber(charsCount),
  };
  const char * output = (const char *)_gsCProcedurePointerGetSubstring(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number pointerGetNumber(Number pointerTo32BitFloats, Number index) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo32BitFloats),
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetNumber(0, 0, 0, args));
}

Number pointerGetInteger(Number pointerTo32BitInts, Number index) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo32BitInts),
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetInteger(0, 0, 0, args));
}

Number pointerGetUnsignedInteger(Number pointerTo32BitUints, Number index) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo32BitUints),
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetUnsignedInteger(0, 0, 0, args));
}

Number pointerGetInteger8Bit(Number pointerTo8BitInts, Number index) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo8BitInts),
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetInteger8Bit(0, 0, 0, args));
}

Number pointerGetUnsignedInteger8Bit(Number pointerTo8BitUints, Number index) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo8BitUints),
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetUnsignedInteger8Bit(0, 0, 0, args));
}

Number pointerGetAtOffsetNumber(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetNumber(0, 0, 0, args));
}

Number pointerGetAtOffsetInteger(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetInteger(0, 0, 0, args));
}

Number pointerGetAtOffsetUnsignedInteger(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetUnsignedInteger(0, 0, 0, args));
}

Number pointerGetAtOffsetInteger16Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetInteger16Bit(0, 0, 0, args));
}

Number pointerGetAtOffsetUnsignedInteger16Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetUnsignedInteger16Bit(0, 0, 0, args));
}

Number pointerGetAtOffsetNumber64Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetNumber64Bit(0, 0, 0, args));
}

Number pointerGetAtOffsetInteger64Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetInteger64Bit(0, 0, 0, args));
}

Number pointerGetAtOffsetUnsignedInteger64Bit(Number pointer, Number pointerBytesFirst) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetAtOffsetUnsignedInteger64Bit(0, 0, 0, args));
}

void pointerSetBool(Number pointerTo8BitBools, Number index, Bool value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo8BitBools),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromBool(value),
  };
  _gsCProcedurePointerSetBool(0, 0, 0, args);
}

void pointerSetString(Number pointer, Number pointerCharsFirst, String string) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerCharsFirst),
    (void *)string.c_str(),
  };
  _gsCProcedurePointerSetString(0, 0, 0, args);
}

void pointerSetStringExcludingNullChar(Number pointer, Number pointerCharsFirst, String string) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerCharsFirst),
    (void *)string.c_str(),
  };
  _gsCProcedurePointerSetStringExcludingNullChar(0, 0, 0, args);
}

void pointerSetSubstring(Number pointer, Number pointerCharsFirst, String string, Number stringCharsFirst, Number stringCharsCount) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerCharsFirst),
    (void *)string.c_str(),
    _gsVoidPointerFromNumber(stringCharsFirst),
    _gsVoidPointerFromNumber(stringCharsCount),
  };
  _gsCProcedurePointerSetSubstring(0, 0, 0, args);
}

void pointerSetNumber(Number pointerTo32BitFloats, Number index, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo32BitFloats),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetNumber(0, 0, 0, args);
}

void pointerSetInteger(Number pointerTo32BitInts, Number index, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo32BitInts),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetInteger(0, 0, 0, args);
}

void pointerSetUnsignedInteger(Number pointerTo32BitUints, Number index, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo32BitUints),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetUnsignedInteger(0, 0, 0, args);
}

void pointerSetInteger8Bit(Number pointerTo8BitInts, Number index, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo8BitInts),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetInteger8Bit(0, 0, 0, args);
}

void pointerSetUnsignedInteger8Bit(Number pointerTo8BitUints, Number index, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTo8BitUints),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetUnsignedInteger8Bit(0, 0, 0, args);
}

void pointerSetAtOffsetNumber(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetNumber(0, 0, 0, args);
}

void pointerSetAtOffsetInteger(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetInteger(0, 0, 0, args);
}

void pointerSetAtOffsetUnsignedInteger(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetUnsignedInteger(0, 0, 0, args);
}

void pointerSetAtOffsetInteger16Bit(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetInteger16Bit(0, 0, 0, args);
}

void pointerSetAtOffsetUnsignedInteger16Bit(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetUnsignedInteger16Bit(0, 0, 0, args);
}

void pointerSetAtOffsetNumber64Bit(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetNumber64Bit(0, 0, 0, args);
}

void pointerSetAtOffsetInteger64Bit(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetInteger64Bit(0, 0, 0, args);
}

void pointerSetAtOffsetUnsignedInteger64Bit(Number pointer, Number pointerBytesFirst, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedurePointerSetAtOffsetUnsignedInteger64Bit(0, 0, 0, args);
}

Number pointerGetRaw8Bit(Number pointer, Number bytesFirst) /* -> Number raw8BitsAsDouble */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetRaw8Bit(0, 0, 0, args));
}

Number pointerGetRaw16Bit(Number pointer, Number bytesFirst) /* -> Number raw16BitsAsDouble */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetRaw16Bit(0, 0, 0, args));
}

Number pointerGetRaw32Bit(Number pointer, Number bytesFirst) /* -> Number raw32BitsAsDouble */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetRaw32Bit(0, 0, 0, args));
}

Number pointerGetRaw64Bit(Number pointer, Number bytesFirst) /* -> Number raw64BitsAsDouble */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetRaw64Bit(0, 0, 0, args));
}

void pointerSetRaw8Bit(Number pointer, Number bytesFirst, Number raw8BitsAsDouble) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
    _gsVoidPointerFromNumber(raw8BitsAsDouble),
  };
  _gsCProcedurePointerSetRaw8Bit(0, 0, 0, args);
}

void pointerSetRaw16Bit(Number pointer, Number bytesFirst, Number raw16BitsAsDouble) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
    _gsVoidPointerFromNumber(raw16BitsAsDouble),
  };
  _gsCProcedurePointerSetRaw16Bit(0, 0, 0, args);
}

void pointerSetRaw32Bit(Number pointer, Number bytesFirst, Number raw32BitsAsDouble) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
    _gsVoidPointerFromNumber(raw32BitsAsDouble),
  };
  _gsCProcedurePointerSetRaw32Bit(0, 0, 0, args);
}

void pointerSetRaw64Bit(Number pointer, Number bytesFirst, Number raw64BitsAsDouble) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesFirst),
    _gsVoidPointerFromNumber(raw64BitsAsDouble),
  };
  _gsCProcedurePointerSetRaw64Bit(0, 0, 0, args);
}

Bool pointerIsNull(Number pointer) /* -> Bool isNull */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
  };
  return _gsBoolFromVoidPointer(_gsCProcedurePointerIsNull(0, 0, 0, args));
}

Number pointerGetNull() /* -> Number nullPointer */ {
  return _gsNumberFromVoidPointer(_gsCProcedurePointerGetNull(0, 0, 0, 0));
}

Bool pointersAreEqual(Number pointerA, Number pointerB) /* -> Bool areEqual */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerA),
    _gsVoidPointerFromNumber(pointerB),
  };
  return _gsBoolFromVoidPointer(_gsCProcedurePointersAreEqual(0, 0, 0, args));
}

Number pointerOffsetByBytes(Number pointer, Number bytesOffset) /* -> Number offsettedPointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(bytesOffset),
  };
  return _gsNumberFromVoidPointer(_gsCProcedurePointerOffsetByBytes(0, 0, 0, args));
}

Bool pointerDrawPixels(Number pointer, Number pointerBytesOffset, Number pixelsWidth, Number pixelsHeight, Number pixelsFormat, Number pixelsType) /* -> Bool success */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesOffset),
    _gsVoidPointerFromNumber(pixelsWidth),
    _gsVoidPointerFromNumber(pixelsHeight),
    _gsVoidPointerFromNumber(pixelsFormat),
    _gsVoidPointerFromNumber(pixelsType),
  };
  return _gsBoolFromVoidPointer(_gsCProcedurePointerDrawPixels(0, 0, 0, args));
}

Number globalDynamicArrayNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalDynamicArrayNew(0, 0, 0, args));
}

Number globalDynamicArrayPersistentNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalDynamicArrayPersistentNew(0, 0, 0, args));
}

void globalDynamicArrayDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureGlobalDynamicArrayDelete(0, 0, 0, args);
}

void globalDynamicArrayPersistentDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureGlobalDynamicArrayPersistentDelete(0, 0, 0, args);
}

void globalDynamicArrayDeleteAll() {
  _gsCProcedureGlobalDynamicArrayDeleteAll(0, 0, 0, 0);
}

void globalDynamicArrayPersistentDeleteAll() {
  _gsCProcedureGlobalDynamicArrayPersistentDeleteAll(0, 0, 0, 0);
}

Number globalDynamicArrayGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalDynamicArrayGetHandle(0, 0, 0, args));
}

Number globalDynamicArrayPersistentGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalDynamicArrayPersistentGetHandle(0, 0, 0, args));
}

Number dynamicArrayGet(Number handle, Number index) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureDynamicArrayGet(0, 0, 0, args));
}

void dynamicArraySet(Number handle, Number index, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedureDynamicArraySet(0, 0, 0, args);
}

void dynamicArrayAppend(Number handle, Number value) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedureDynamicArrayAppend(0, 0, 0, args);
}

Bool dynamicArrayRemoveAt(Number handle, Number index) /* -> Bool success */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureDynamicArrayRemoveAt(0, 0, 0, args));
}

void dynamicArrayRemoveLast(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureDynamicArrayRemoveLast(0, 0, 0, args);
}

Number dynamicArrayGetSize(Number handle) /* -> Number size */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureDynamicArrayGetSize(0, 0, 0, args));
}

void memset(Number pointer, Number pointerBytesFirst, Number value8Bit, Number bytesCount) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value8Bit),
    _gsVoidPointerFromNumber(bytesCount),
  };
  _gsCProcedureMemset(0, 0, 0, args);
}

void memcpy(Number pointerTarget, Number pointerTargetBytesFirst, Number pointerSource, Number pointerSourceBytesFirst, Number bytesCount) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTarget),
    _gsVoidPointerFromNumber(pointerTargetBytesFirst),
    _gsVoidPointerFromNumber(pointerSource),
    _gsVoidPointerFromNumber(pointerSourceBytesFirst),
    _gsVoidPointerFromNumber(bytesCount),
  };
  _gsCProcedureMemcpy(0, 0, 0, args);
}

Bool memcmp(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst, Number bytesCount) /* -> Bool areEqual */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerA),
    _gsVoidPointerFromNumber(pointerABytesFirst),
    _gsVoidPointerFromNumber(pointerB),
    _gsVoidPointerFromNumber(pointerBBytesFirst),
    _gsVoidPointerFromNumber(bytesCount),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMemcmp(0, 0, 0, args));
}

void threadSafeMemset(Number pointer, Number pointerBytesFirst, Number value8Bit, Number bytesCount) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(value8Bit),
    _gsVoidPointerFromNumber(bytesCount),
  };
  _gsCProcedureThreadSafeMemset(0, 0, 0, args);
}

void threadSafeMemcpy(Number pointerTarget, Number pointerTargetBytesFirst, Number pointerSource, Number pointerSourceBytesFirst, Number bytesCount) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerTarget),
    _gsVoidPointerFromNumber(pointerTargetBytesFirst),
    _gsVoidPointerFromNumber(pointerSource),
    _gsVoidPointerFromNumber(pointerSourceBytesFirst),
    _gsVoidPointerFromNumber(bytesCount),
  };
  _gsCProcedureThreadSafeMemcpy(0, 0, 0, args);
}

Bool threadSafeMemcmp(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst, Number bytesCount) /* -> Bool areEqual */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerA),
    _gsVoidPointerFromNumber(pointerABytesFirst),
    _gsVoidPointerFromNumber(pointerB),
    _gsVoidPointerFromNumber(pointerBBytesFirst),
    _gsVoidPointerFromNumber(bytesCount),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureThreadSafeMemcmp(0, 0, 0, args));
}

Bool threadWaitForEqualUint64Value(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst) /* -> Bool trueIfFinishedFalseIfAborted */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerA),
    _gsVoidPointerFromNumber(pointerABytesFirst),
    _gsVoidPointerFromNumber(pointerB),
    _gsVoidPointerFromNumber(pointerBBytesFirst),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureThreadWaitForEqualUint64Value(0, 0, 0, args));
}

Bool threadWaitForEqualOrMoreThanUint64Value(Number pointerA, Number pointerABytesFirst, Number pointerB, Number pointerBBytesFirst) /* -> Bool trueIfFinishedFalseIfAborted */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerA),
    _gsVoidPointerFromNumber(pointerABytesFirst),
    _gsVoidPointerFromNumber(pointerB),
    _gsVoidPointerFromNumber(pointerBBytesFirst),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureThreadWaitForEqualOrMoreThanUint64Value(0, 0, 0, args));
}

Bool threadWaitForThread2FrameToFinish(Number thread2Frame) /* -> Bool trueIfFinishedFalseIfAborted */ {
  void * args[] = {
    _gsVoidPointerFromNumber(thread2Frame),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureThreadWaitForThread2FrameToFinish(0, 0, 0, args));
}

Number strlenWithNullChar(String string) /* -> Number length */ {
  void * args[] = {
    (void *)string.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureStrlenWithNullChar(0, 0, 0, args));
}

Number keyboardGetGlfwKeyEvent(Number glfwKey) /* -> Number keyEvent */ {
  void * args[] = {
    _gsVoidPointerFromNumber(glfwKey),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureKeyboardGetGlfwKeyEvent(0, 0, 0, args));
}

Number keyboardGetGlfwKeyModifiers(Number glfwKey) /* -> Number keyModifiers */ {
  void * args[] = {
    _gsVoidPointerFromNumber(glfwKey),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureKeyboardGetGlfwKeyModifiers(0, 0, 0, args));
}

String keyboardGetGlfwCodepointString() /* -> String codepoint */ {
  const char * output = (const char *)_gsCProcedureKeyboardGetGlfwCodepointString(0, 0, 0, 0);
  String out = output;
  free((void *)output);
  return out;
}

void mouseGlfwSetInputMode(Number mode) {
  void * args[] = {
    _gsVoidPointerFromNumber(mode),
  };
  _gsCProcedureMouseGlfwSetInputMode(0, 0, 0, args);
}

void mouseSetXY(Number x, Number y) {
  void * args[] = {
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
  };
  _gsCProcedureMouseSetXY(0, 0, 0, args);
}

Number mouseGetX() /* -> Number x */ {
  return _gsNumberFromVoidPointer(_gsCProcedureMouseGetX(0, 0, 0, 0));
}

Number mouseGetY() /* -> Number y */ {
  return _gsNumberFromVoidPointer(_gsCProcedureMouseGetY(0, 0, 0, 0));
}

Number mouseGetPreviousX() /* -> Number x */ {
  return _gsNumberFromVoidPointer(_gsCProcedureMouseGetPreviousX(0, 0, 0, 0));
}

Number mouseGetPreviousY() /* -> Number y */ {
  return _gsNumberFromVoidPointer(_gsCProcedureMouseGetPreviousY(0, 0, 0, 0));
}

Number mouseGetMoveEvent() /* -> Number mouseEvent */ {
  return _gsNumberFromVoidPointer(_gsCProcedureMouseGetMoveEvent(0, 0, 0, 0));
}

Bool mouseGetButtonIsPressed(Number button) /* -> Bool buttonIsPressed */ {
  void * args[] = {
    _gsVoidPointerFromNumber(button),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMouseGetButtonIsPressed(0, 0, 0, args));
}

Bool mouseGetButtonIsPressedAndHeld(Number button) /* -> Bool buttonIsPressedAndHeld */ {
  void * args[] = {
    _gsVoidPointerFromNumber(button),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMouseGetButtonIsPressedAndHeld(0, 0, 0, args));
}

Bool mouseGetButtonIsReleased(Number button) /* -> Bool buttonIsReleased */ {
  void * args[] = {
    _gsVoidPointerFromNumber(button),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMouseGetButtonIsReleased(0, 0, 0, args));
}

Number mouseGetWheelScroll() /* -> Number scroll */ {
  return _gsNumberFromVoidPointer(_gsCProcedureMouseGetWheelScroll(0, 0, 0, 0));
}

Bool gamepadIsPresent(Number gamepadId0to15) /* -> Bool gamepadIsPresent */ {
  void * args[] = {
    _gsVoidPointerFromNumber(gamepadId0to15),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureGamepadIsPresent(0, 0, 0, args));
}

NumberArray gamepadGet15Buttons6AxesNumbers(Number gamepadId0to15) /* -> Number buttonsAndAxes [21] {a, b, x, y, leftBumper, rightBumper, back, start, guide, leftThumb, rightThumb, dpadUp, dpadRight, dpadDown, dpadLeft, axisLeftX, axisLeftY, axisRightX, axisRightY, leftTrigger, rightTrigger} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(gamepadId0to15),
  };
  Number * output = (Number *)_gsCProcedureGamepadGet15Buttons6AxesNumbers(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 21); }
  free(output);
  return out;
}

String gamepadGetName(Number gamepadId0to15) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(gamepadId0to15),
  };
  const char * output = (const char *)_gsCProcedureGamepadGetName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

String gamepadGetGUID(Number gamepadId0to15) /* -> String GUID */ {
  void * args[] = {
    _gsVoidPointerFromNumber(gamepadId0to15),
  };
  const char * output = (const char *)_gsCProcedureGamepadGetGUID(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Bool gamepadUpdateGamecontrollerdbTxt(Number gamepadId0to15, String mappings) /* -> Bool success */ {
  void * args[] = {
    _gsVoidPointerFromNumber(gamepadId0to15),
    (void *)mappings.c_str(),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureGamepadUpdateGamecontrollerdbTxt(0, 0, 0, args));
}

Number boolToNumber(Bool boolean) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromBool(boolean),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureBoolToNumber(0, 0, 0, args));
}

String boolToString(Bool boolean) /* -> String string */ {
  void * args[] = {
    _gsVoidPointerFromBool(boolean),
  };
  const char * output = (const char *)_gsCProcedureBoolToString(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number numberFromRaw8BitInteger(Number raw8BitInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw8BitInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw8BitInteger(0, 0, 0, args));
}

Number numberFromRaw8BitUnsignedInteger(Number raw8BitUnsignedInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw8BitUnsignedInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw8BitUnsignedInteger(0, 0, 0, args));
}

Number numberFromRaw16BitInteger(Number raw16BitInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw16BitInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw16BitInteger(0, 0, 0, args));
}

Number numberFromRaw16BitUnsignedInteger(Number raw16BitUnsignedInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw16BitUnsignedInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw16BitUnsignedInteger(0, 0, 0, args));
}

Number numberFromRaw32BitInteger(Number raw32BitInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw32BitInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw32BitInteger(0, 0, 0, args));
}

Number numberFromRaw32BitUnsignedInteger(Number raw32BitUnsignedInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw32BitUnsignedInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw32BitUnsignedInteger(0, 0, 0, args));
}

Number numberFromRaw32BitFloat(Number raw32BitFloat) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw32BitFloat),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw32BitFloat(0, 0, 0, args));
}

Number numberFromRaw64BitInteger(Number raw64BitInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw64BitInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw64BitInteger(0, 0, 0, args));
}

Number numberFromRaw64BitUnsignedInteger(Number raw64BitUnsignedInteger) /* -> Number number */ {
  void * args[] = {
    _gsVoidPointerFromNumber(raw64BitUnsignedInteger),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureNumberFromRaw64BitUnsignedInteger(0, 0, 0, args));
}

Bool numberToBool(Number number) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(number),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureNumberToBool(0, 0, 0, args));
}

String numberToString(Number number) /* -> String string */ {
  void * args[] = {
    _gsVoidPointerFromNumber(number),
  };
  const char * output = (const char *)_gsCProcedureNumberToString(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

String numberToBinaryString(Number number) /* -> String string */ {
  void * args[] = {
    _gsVoidPointerFromNumber(number),
  };
  const char * output = (const char *)_gsCProcedureNumberToBinaryString(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

String numberWholePartToString(Number number) /* -> String string */ {
  void * args[] = {
    _gsVoidPointerFromNumber(number),
  };
  const char * output = (const char *)_gsCProcedureNumberWholePartToString(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number stringCharToNumber(String string) /* -> Number charNumber */ {
  void * args[] = {
    (void *)string.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureStringCharToNumber(0, 0, 0, args));
}

NumberArray stringToNumberArray(String string) /* -> Number array [] */ {
  void * args[] = {
    (void *)string.c_str(),
  };
  Number * output = (Number *)_gsCProcedureStringToNumberArray(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (string.length() + 1)); }
  free(output);
  return out;
}

Number interpretStringToInteger(String string) /* -> Number integer */ {
  void * args[] = {
    (void *)string.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureInterpretStringToInteger(0, 0, 0, args));
}

Number interpretStringToFloat(String string) /* -> Number float */ {
  void * args[] = {
    (void *)string.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureInterpretStringToFloat(0, 0, 0, args));
}

Number interpretStringToDouble(String string) /* -> Number double */ {
  void * args[] = {
    (void *)string.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureInterpretStringToDouble(0, 0, 0, args));
}

String stringReadFromFile(String filepath) /* -> String string */ {
  void * args[] = {
    (void *)filepath.c_str(),
  };
  const char * output = (const char *)_gsCProcedureStringReadFromFile(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

void stringWriteToFile(String string, String filepath) {
  void * args[] = {
    (void *)string.c_str(),
    (void *)filepath.c_str(),
  };
  _gsCProcedureStringWriteToFile(0, 0, 0, args);
}

void stringAppendToFile(String string, String filepath) {
  void * args[] = {
    (void *)string.c_str(),
    (void *)filepath.c_str(),
  };
  _gsCProcedureStringAppendToFile(0, 0, 0, args);
}

Number binaryGetByteSizeOfFile(String filepath) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)filepath.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureBinaryGetByteSizeOfFile(0, 0, 0, args));
}

void binaryReadFromFile(String filepath, Number writeToPointer, Number writeToPointerBytesFirst) {
  void * args[] = {
    (void *)filepath.c_str(),
    _gsVoidPointerFromNumber(writeToPointer),
    _gsVoidPointerFromNumber(writeToPointerBytesFirst),
  };
  _gsCProcedureBinaryReadFromFile(0, 0, 0, args);
}

void binaryWriteToFile(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, String writeToFilepath) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(pointerBytesCount),
    (void *)writeToFilepath.c_str(),
  };
  _gsCProcedureBinaryWriteToFile(0, 0, 0, args);
}

String getClipboardString() /* -> String clipboard */ {
  const char * output = (const char *)_gsCProcedureGetClipboardString(0, 0, 0, 0);
  String out = output;
  free((void *)output);
  return out;
}

void setClipboardString(String clipboard) {
  void * args[] = {
    (void *)clipboard.c_str(),
  };
  _gsCProcedureSetClipboardString(0, 0, 0, args);
}

void gizmoSetMode(String label, Number mode) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(mode),
  };
  _gsCProcedureGizmoSetMode(0, 0, 0, args);
}

NumberArray gizmoGetVector(String label) /* -> Number position [3] {x, y, z} */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  Number * output = (Number *)_gsCProcedureGizmoGetVector(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray gizmoGetVersor(String label) /* -> Number quaternion [4] {x, y, z, w} */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  Number * output = (Number *)_gsCProcedureGizmoGetVersor(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 4); }
  free(output);
  return out;
}

NumberArray gizmoGetScale(String label) /* -> Number scale [3] {x, y, z} */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  Number * output = (Number *)_gsCProcedureGizmoGetScale(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

void gizmoSetVector(String label, Number x, Number y, Number z) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureGizmoSetVector(0, 0, 0, args);
}

void gizmoSetVersor(String label, Number x, Number y, Number z, Number w) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(w),
  };
  _gsCProcedureGizmoSetVersor(0, 0, 0, args);
}

void gizmoSetScale(String label, Number x, Number y, Number z) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureGizmoSetScale(0, 0, 0, args);
}

void gizmoSetDrawScale(String label, Number scale) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(scale),
  };
  _gsCProcedureGizmoSetDrawScale(0, 0, 0, args);
}

void gizmoSetDrawColors(String label, Number xr, Number xg, Number xb, Number xa, Number yr, Number yg, Number yb, Number ya, Number zr, Number zg, Number zb, Number za, Number wr, Number wg, Number wb, Number wa, Number selectr, Number selectg, Number selectb, Number selecta) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(xr),
    _gsVoidPointerFromNumber(xg),
    _gsVoidPointerFromNumber(xb),
    _gsVoidPointerFromNumber(xa),
    _gsVoidPointerFromNumber(yr),
    _gsVoidPointerFromNumber(yg),
    _gsVoidPointerFromNumber(yb),
    _gsVoidPointerFromNumber(ya),
    _gsVoidPointerFromNumber(zr),
    _gsVoidPointerFromNumber(zg),
    _gsVoidPointerFromNumber(zb),
    _gsVoidPointerFromNumber(za),
    _gsVoidPointerFromNumber(wr),
    _gsVoidPointerFromNumber(wg),
    _gsVoidPointerFromNumber(wb),
    _gsVoidPointerFromNumber(wa),
    _gsVoidPointerFromNumber(selectr),
    _gsVoidPointerFromNumber(selectg),
    _gsVoidPointerFromNumber(selectb),
    _gsVoidPointerFromNumber(selecta),
  };
  _gsCProcedureGizmoSetDrawColors(0, 0, 0, args);
}

void gizmoDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureGizmoDelete(0, 0, 0, args);
}

void gizmoDeleteAll() {
  _gsCProcedureGizmoDeleteAll(0, 0, 0, 0);
}

Number getLastFrameTime() /* -> Number lastFrameTime */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLastFrameTime(0, 0, 0, 0));
}

Number getSystemTimeMillis() /* -> Number ms */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetSystemTimeMillis(0, 0, 0, 0));
}

Number getSystemTimeMicros() /* -> Number us */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetSystemTimeMicros(0, 0, 0, 0));
}

Number getUnixTime() /* -> Number unixTime */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetUnixTime(0, 0, 0, 0));
}

Bool framebufferBegin(String label, Number width, Number height, Bool setupScreenDefaultIs1) /* -> Bool framebufferIsValid */ {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromBool(setupScreenDefaultIs1),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureFramebufferBegin(0, 0, 0, args));
}

void framebufferEnd(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureFramebufferEnd(0, 0, 0, args);
}

void framebufferDraw(String label, Number x, Number y, Number width, Number height) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
  };
  _gsCProcedureFramebufferDraw(0, 0, 0, args);
}

void framebufferClear(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureFramebufferClear(0, 0, 0, args);
}

void framebufferCopyToImage(String label, Number image) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(image),
  };
  _gsCProcedureFramebufferCopyToImage(0, 0, 0, args);
}

void framebufferDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureFramebufferDelete(0, 0, 0, args);
}

void framebufferDeleteAll() {
  _gsCProcedureFramebufferDeleteAll(0, 0, 0, 0);
}

Number meshNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshNew(0, 0, 0, args));
}

Number meshPersistentNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshPersistentNew(0, 0, 0, args));
}

void meshDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureMeshDelete(0, 0, 0, args);
}

void meshPersistentDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureMeshPersistentDelete(0, 0, 0, args);
}

void meshDeleteAll() {
  _gsCProcedureMeshDeleteAll(0, 0, 0, 0);
}

void meshPersistentDeleteAll() {
  _gsCProcedureMeshPersistentDeleteAll(0, 0, 0, 0);
}

Number meshGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetHandle(0, 0, 0, args));
}

Number meshPersistentGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshPersistentGetHandle(0, 0, 0, args));
}

Bool meshIsUsingColors(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshIsUsingColors(0, 0, 0, args));
}

Bool meshIsUsingTextures(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshIsUsingTextures(0, 0, 0, args));
}

Bool meshIsUsingIndices(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshIsUsingIndices(0, 0, 0, args));
}

void meshEnableColors(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshEnableColors(0, 0, 0, args);
}

void meshEnableTextures(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshEnableTextures(0, 0, 0, args);
}

void meshEnableIndices(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshEnableIndices(0, 0, 0, args);
}

void meshDisableColors(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshDisableColors(0, 0, 0, args);
}

void meshDisableTextures(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshDisableTextures(0, 0, 0, args);
}

void meshDisableIndices(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshDisableIndices(0, 0, 0, args);
}

Bool meshHasVertices(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHasVertices(0, 0, 0, args));
}

Bool meshHasColors(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHasColors(0, 0, 0, args));
}

Bool meshHasTexCoords(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHasTexCoords(0, 0, 0, args));
}

Bool meshHasIndices(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHasIndices(0, 0, 0, args));
}

Number meshGetVerticesCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetVerticesCount(0, 0, 0, args));
}

Number meshGetColorsCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetColorsCount(0, 0, 0, args));
}

Number meshGetTexCoordsCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetTexCoordsCount(0, 0, 0, args));
}

Number meshGetIndicesCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetIndicesCount(0, 0, 0, args));
}

Bool meshHaveVerticesChanged(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHaveVerticesChanged(0, 0, 0, args));
}

Bool meshHaveColorsChanged(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHaveColorsChanged(0, 0, 0, args));
}

Bool meshHaveTexCoordsChanged(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHaveTexCoordsChanged(0, 0, 0, args));
}

Bool meshHaveIndicesChanged(Number handle) /* -> Bool boolean */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureMeshHaveIndicesChanged(0, 0, 0, args));
}

void meshAddVertex(Number handle, Number x, Number y, Number z) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureMeshAddVertex(0, 0, 0, args);
}

void meshAddColor(Number handle, Number r0to1, Number g0to1, Number b0to1, Number a0to1) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(r0to1),
    _gsVoidPointerFromNumber(g0to1),
    _gsVoidPointerFromNumber(b0to1),
    _gsVoidPointerFromNumber(a0to1),
  };
  _gsCProcedureMeshAddColor(0, 0, 0, args);
}

void meshAddTexCoord(Number handle, Number u, Number v) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(u),
    _gsVoidPointerFromNumber(v),
  };
  _gsCProcedureMeshAddTexCoord(0, 0, 0, args);
}

void meshAddIndex(Number handle, Number index) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  _gsCProcedureMeshAddIndex(0, 0, 0, args);
}

void meshRemoveVertex(Number handle, Number index) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  _gsCProcedureMeshRemoveVertex(0, 0, 0, args);
}

void meshRemoveColor(Number handle, Number index) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  _gsCProcedureMeshRemoveColor(0, 0, 0, args);
}

void meshRemoveTexCoord(Number handle, Number index) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  _gsCProcedureMeshRemoveTexCoord(0, 0, 0, args);
}

void meshRemoveIndex(Number handle, Number index) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(index),
  };
  _gsCProcedureMeshRemoveIndex(0, 0, 0, args);
}

void meshClear(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshClear(0, 0, 0, args);
}

void meshClearVertices(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshClearVertices(0, 0, 0, args);
}

void meshClearColors(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshClearColors(0, 0, 0, args);
}

void meshClearTexCoords(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshClearTexCoords(0, 0, 0, args);
}

void meshClearIndices(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshClearIndices(0, 0, 0, args);
}

Number meshGetVerticesPointer(Number handle) /* -> Number pointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetVerticesPointer(0, 0, 0, args));
}

Number meshGetColorsPointer(Number handle) /* -> Number pointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetColorsPointer(0, 0, 0, args));
}

Number meshGetTexCoordsPointer(Number handle) /* -> Number pointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetTexCoordsPointer(0, 0, 0, args));
}

Number meshGetIndicesPointer(Number handle) /* -> Number pointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshGetIndicesPointer(0, 0, 0, args));
}

void meshMergeDuplicateVertices(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshMergeDuplicateVertices(0, 0, 0, args);
}

void meshSetupIndicesAuto(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureMeshSetupIndicesAuto(0, 0, 0, args);
}

void meshAddTriangle(Number handle, Number verticesArrayIndex1, Number verticesArrayIndex2, Number verticesArrayIndex3) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(verticesArrayIndex1),
    _gsVoidPointerFromNumber(verticesArrayIndex2),
    _gsVoidPointerFromNumber(verticesArrayIndex3),
  };
  _gsCProcedureMeshAddTriangle(0, 0, 0, args);
}

void meshDraw(Number handle, Number renderMode, Number scaleX, Number scaleY, Number scaleZ, Number vectorX, Number vectorY, Number vectorZ, Number rotationAxisX, Number rotationAxisY, Number rotationAxisZ, Number rotationAngleDeg) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(renderMode),
    _gsVoidPointerFromNumber(scaleX),
    _gsVoidPointerFromNumber(scaleY),
    _gsVoidPointerFromNumber(scaleZ),
    _gsVoidPointerFromNumber(vectorX),
    _gsVoidPointerFromNumber(vectorY),
    _gsVoidPointerFromNumber(vectorZ),
    _gsVoidPointerFromNumber(rotationAxisX),
    _gsVoidPointerFromNumber(rotationAxisY),
    _gsVoidPointerFromNumber(rotationAxisZ),
    _gsVoidPointerFromNumber(rotationAngleDeg),
  };
  _gsCProcedureMeshDraw(0, 0, 0, args);
}

void meshDrawWithColor(Number handle, Number renderMode, Number scaleX, Number scaleY, Number scaleZ, Number vectorX, Number vectorY, Number vectorZ, Number rotationAxisX, Number rotationAxisY, Number rotationAxisZ, Number rotationAngleDeg, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(renderMode),
    _gsVoidPointerFromNumber(scaleX),
    _gsVoidPointerFromNumber(scaleY),
    _gsVoidPointerFromNumber(scaleZ),
    _gsVoidPointerFromNumber(vectorX),
    _gsVoidPointerFromNumber(vectorY),
    _gsVoidPointerFromNumber(vectorZ),
    _gsVoidPointerFromNumber(rotationAxisX),
    _gsVoidPointerFromNumber(rotationAxisY),
    _gsVoidPointerFromNumber(rotationAxisZ),
    _gsVoidPointerFromNumber(rotationAngleDeg),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureMeshDrawWithColor(0, 0, 0, args);
}

void meshDrawDebugVertices(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureMeshDrawDebugVertices(0, 0, 0, args);
}

void meshDrawDebugColors(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureMeshDrawDebugColors(0, 0, 0, args);
}

void meshDrawDebugTexCoords(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureMeshDrawDebugTexCoords(0, 0, 0, args);
}

void meshDrawDebugIndices(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureMeshDrawDebugIndices(0, 0, 0, args);
}

void meshDrawDebugRayTraceIndices(String label, Number maxShowDistanceToDefaultCamera, Bool raytraceHighlightTrianglesDefaultCameraLooksAt) {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(maxShowDistanceToDefaultCamera),
    _gsVoidPointerFromBool(raytraceHighlightTrianglesDefaultCameraLooksAt),
  };
  _gsCProcedureMeshDrawDebugRayTraceIndices(0, 0, 0, args);
}

Number meshImporterGetMeshesCount(String meshFilepath) /* -> Number count */ {
  void * args[] = {
    (void *)meshFilepath.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureMeshImporterGetMeshesCount(0, 0, 0, args));
}

String meshImporterGetMeshName(String meshFilepath, Number meshIndex) /* -> String name */ {
  void * args[] = {
    (void *)meshFilepath.c_str(),
    _gsVoidPointerFromNumber(meshIndex),
  };
  const char * output = (const char *)_gsCProcedureMeshImporterGetMeshName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

void meshImporterGetMesh(String meshFilepath, Number meshIndex, Number writeToMesh) {
  void * args[] = {
    (void *)meshFilepath.c_str(),
    _gsVoidPointerFromNumber(meshIndex),
    _gsVoidPointerFromNumber(writeToMesh),
  };
  _gsCProcedureMeshImporterGetMesh(0, 0, 0, args);
}

void meshImporterDelete(String meshFilepath) {
  void * args[] = {
    (void *)meshFilepath.c_str(),
  };
  _gsCProcedureMeshImporterDelete(0, 0, 0, args);
}

void meshImporterDeleteAll() {
  _gsCProcedureMeshImporterDeleteAll(0, 0, 0, 0);
}

Number imageNew(String label, Number width, Number height) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageNew(0, 0, 0, args));
}

Number imagePersistentNew(String label, Number width, Number height) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImagePersistentNew(0, 0, 0, args));
}

Number imageNewFromFile(String label, String filepath) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
    (void *)filepath.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageNewFromFile(0, 0, 0, args));
}

Number imagePersistentNewFromFile(String label, String filepath) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
    (void *)filepath.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImagePersistentNewFromFile(0, 0, 0, args));
}

void imageDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureImageDelete(0, 0, 0, args);
}

void imagePersistentDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureImagePersistentDelete(0, 0, 0, args);
}

void imageDeleteAll() {
  _gsCProcedureImageDeleteAll(0, 0, 0, 0);
}

void imagePersistentDeleteAll() {
  _gsCProcedureImagePersistentDeleteAll(0, 0, 0, 0);
}

Number imageGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageGetHandle(0, 0, 0, args));
}

Number imagePersistentGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImagePersistentGetHandle(0, 0, 0, args));
}

Bool imageLoadFromMemory(Number handle, Number pointer, Number pointerBytesFirst, Number pointerBytesCount) /* -> Bool success */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(pointerBytesCount),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImageLoadFromMemory(0, 0, 0, args));
}

void imageClear(Number handle, Number alpha0to255) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(alpha0to255),
  };
  _gsCProcedureImageClear(0, 0, 0, args);
}

Bool imageHasMipmap(Number handle) /* -> Bool hasMipmap */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImageHasMipmap(0, 0, 0, args));
}

void imageMipmapDisable(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageMipmapDisable(0, 0, 0, args);
}

void imageMipmapEnable(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageMipmapEnable(0, 0, 0, args);
}

void imageMipmapGenerate(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageMipmapGenerate(0, 0, 0, args);
}

void imageSetTextureMinMagFilter(Number handle, Number minFilter, Number magFilter) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(minFilter),
    _gsVoidPointerFromNumber(magFilter),
  };
  _gsCProcedureImageSetTextureMinMagFilter(0, 0, 0, args);
}

void imageSetTextureWrap(Number handle, Number wrapX, Number wrapY) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(wrapX),
    _gsVoidPointerFromNumber(wrapY),
  };
  _gsCProcedureImageSetTextureWrap(0, 0, 0, args);
}

void imageSetTextureMaxAnisotropy(Number handle, Number maxAnisotropy) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(maxAnisotropy),
  };
  _gsCProcedureImageSetTextureMaxAnisotropy(0, 0, 0, args);
}

Number imageGetWidth(Number handle) /* -> Number width */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageGetWidth(0, 0, 0, args));
}

Number imageGetHeight(Number handle) /* -> Number height */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageGetHeight(0, 0, 0, args));
}

Number imageGetBitsPerPixel(Number handle) /* -> Number bitsPerPixel */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageGetBitsPerPixel(0, 0, 0, args));
}

Number imageGetImageType(Number handle) /* -> Number imageType */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageGetImageType(0, 0, 0, args));
}

Number imageGetPixelsPointer(Number handle) /* -> Number pointerToPixels */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureImageGetPixelsPointer(0, 0, 0, args));
}

NumberArray imageGetColor(Number handle, Number x, Number y) /* -> Number color [4] {r0To255, g0To255, b0To255, a0To255} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
  };
  Number * output = (Number *)_gsCProcedureImageGetColor(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 4); }
  free(output);
  return out;
}

void imageSetColor(Number handle, Number x, Number y, Number r0to255, Number g0to255, Number b0to255, Number a0to255) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(r0to255),
    _gsVoidPointerFromNumber(g0to255),
    _gsVoidPointerFromNumber(b0to255),
    _gsVoidPointerFromNumber(a0to255),
  };
  _gsCProcedureImageSetColor(0, 0, 0, args);
}

void imageGammaCorrect(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageGammaCorrect(0, 0, 0, args);
}

void imageUpdate(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageUpdate(0, 0, 0, args);
}

void imageBind(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageBind(0, 0, 0, args);
}

void imageUnbind(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureImageUnbind(0, 0, 0, args);
}

Bool shaderBegin(String label, String filepathShaderVert, String filepathShaderFrag) /* -> Bool shadersAreValid */ {
  void * args[] = {
    (void *)label.c_str(),
    (void *)filepathShaderVert.c_str(),
    (void *)filepathShaderFrag.c_str(),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureShaderBegin(0, 0, 0, args));
}

void shaderEnd(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureShaderEnd(0, 0, 0, args);
}

void shaderSetUniform4f(String label, String uniformName, Number x, Number y, Number z, Number w) {
  void * args[] = {
    (void *)label.c_str(),
    (void *)uniformName.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(w),
  };
  _gsCProcedureShaderSetUniform4f(0, 0, 0, args);
}

void shaderSetUniform4fv(String label, String uniformName, Number pointer, Number count) {
  void * args[] = {
    (void *)label.c_str(),
    (void *)uniformName.c_str(),
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(count),
  };
  _gsCProcedureShaderSetUniform4fv(0, 0, 0, args);
}

void shaderSetUniformMatrix4f(String label, String uniformName, Number pointer) {
  void * args[] = {
    (void *)label.c_str(),
    (void *)uniformName.c_str(),
    _gsVoidPointerFromNumber(pointer),
  };
  _gsCProcedureShaderSetUniformMatrix4f(0, 0, 0, args);
}

void shaderSetUniformImage(String label, String uniformName, Number imageHandle, Number textureLocation) {
  void * args[] = {
    (void *)label.c_str(),
    (void *)uniformName.c_str(),
    _gsVoidPointerFromNumber(imageHandle),
    _gsVoidPointerFromNumber(textureLocation),
  };
  _gsCProcedureShaderSetUniformImage(0, 0, 0, args);
}

void shaderDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureShaderDelete(0, 0, 0, args);
}

void shaderDeleteAll() {
  _gsCProcedureShaderDeleteAll(0, 0, 0, 0);
}

Number soundPlayerNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerNew(0, 0, 0, args));
}

Number soundPlayerPersistentNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerPersistentNew(0, 0, 0, args));
}

void soundPlayerDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureSoundPlayerDelete(0, 0, 0, args);
}

void soundPlayerPersistentDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureSoundPlayerPersistentDelete(0, 0, 0, args);
}

void soundPlayerDeleteAll() {
  _gsCProcedureSoundPlayerDeleteAll(0, 0, 0, 0);
}

void soundPlayerPersistentDeleteAll() {
  _gsCProcedureSoundPlayerPersistentDeleteAll(0, 0, 0, 0);
}

Number soundPlayerGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerGetHandle(0, 0, 0, args));
}

Number soundPlayerPersistentGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerPersistentGetHandle(0, 0, 0, args));
}

Bool soundPlayerLoad(Number handle, String filepath, Bool streamDefaultIsFalse) /* -> Bool success */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    (void *)filepath.c_str(),
    _gsVoidPointerFromBool(streamDefaultIsFalse),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureSoundPlayerLoad(0, 0, 0, args));
}

void soundPlayerUnload(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureSoundPlayerUnload(0, 0, 0, args);
}

void soundPlayerPlay(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureSoundPlayerPlay(0, 0, 0, args);
}

void soundPlayerStop(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureSoundPlayerStop(0, 0, 0, args);
}

void soundPlayerSetVolume(Number handle, Number volume0to1) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(volume0to1),
  };
  _gsCProcedureSoundPlayerSetVolume(0, 0, 0, args);
}

void soundPlayerSetPan(Number handle, Number panMinus1to1) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(panMinus1to1),
  };
  _gsCProcedureSoundPlayerSetPan(0, 0, 0, args);
}

void soundPlayerSetSpeed(Number handle, Number speedDefaultIs1) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(speedDefaultIs1),
  };
  _gsCProcedureSoundPlayerSetSpeed(0, 0, 0, args);
}

void soundPlayerSetPaused(Number handle, Bool paused) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromBool(paused),
  };
  _gsCProcedureSoundPlayerSetPaused(0, 0, 0, args);
}

void soundPlayerSetLoop(Number handle, Bool loop) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromBool(loop),
  };
  _gsCProcedureSoundPlayerSetLoop(0, 0, 0, args);
}

void soundPlayerSetMultiPlay(Number handle, Bool multiplay) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromBool(multiplay),
  };
  _gsCProcedureSoundPlayerSetMultiPlay(0, 0, 0, args);
}

void soundPlayerSetPosition(Number handle, Number percent0to1) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(percent0to1),
  };
  _gsCProcedureSoundPlayerSetPosition(0, 0, 0, args);
}

Number soundPlayerGetPosition(Number handle) /* -> Number percent0to1 */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerGetPosition(0, 0, 0, args));
}

void soundPlayerSetPositionMS(Number handle, Number milliseconds) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(milliseconds),
  };
  _gsCProcedureSoundPlayerSetPositionMS(0, 0, 0, args);
}

Number soundPlayerGetPositionMS(Number handle) /* -> Number milliseconds */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerGetPositionMS(0, 0, 0, args));
}

Bool soundPlayerIsPlaying(Number handle) /* -> Bool isPlaying */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureSoundPlayerIsPlaying(0, 0, 0, args));
}

Number soundPlayerGetSpeed(Number handle) /* -> Number speed */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerGetSpeed(0, 0, 0, args));
}

Number soundPlayerGetPan(Number handle) /* -> Number pan */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerGetPan(0, 0, 0, args));
}

Number soundPlayerGetVolume(Number handle) /* -> Number volume */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureSoundPlayerGetVolume(0, 0, 0, args));
}

Bool soundPlayerIsLoaded(Number handle) /* -> Bool isLoaded */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureSoundPlayerIsLoaded(0, 0, 0, args));
}

void soundSetVolume(Number volume0to1) {
  void * args[] = {
    _gsVoidPointerFromNumber(volume0to1),
  };
  _gsCProcedureSoundSetVolume(0, 0, 0, args);
}

void soundShutdown() {
  _gsCProcedureSoundShutdown(0, 0, 0, 0);
}

void soundStopAll() {
  _gsCProcedureSoundStopAll(0, 0, 0, 0);
}

void soundUpdate() {
  _gsCProcedureSoundUpdate(0, 0, 0, 0);
}

void imguiBegin() {
  _gsCProcedureImguiBegin(0, 0, 0, 0);
}

void imguiEnd() {
  _gsCProcedureImguiEnd(0, 0, 0, 0);
}

Bool imguiWindowBegin(String windowName, Number outPointerToWindowIsOpenBool, Number outPointerToWindowIsOpenBoolBytesFirst) /* -> Bool state */ {
  void * args[] = {
    (void *)windowName.c_str(),
    _gsVoidPointerFromNumber(outPointerToWindowIsOpenBool),
    _gsVoidPointerFromNumber(outPointerToWindowIsOpenBoolBytesFirst),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImguiWindowBegin(0, 0, 0, args));
}

void imguiWindowEnd() {
  _gsCProcedureImguiWindowEnd(0, 0, 0, 0);
}

Bool imguiButton(String buttonName, Number buttonWidth, Number buttonHeight) /* -> Bool state */ {
  void * args[] = {
    (void *)buttonName.c_str(),
    _gsVoidPointerFromNumber(buttonWidth),
    _gsVoidPointerFromNumber(buttonHeight),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImguiButton(0, 0, 0, args));
}

void imguiText(String text) {
  void * args[] = {
    (void *)text.c_str(),
  };
  _gsCProcedureImguiText(0, 0, 0, args);
}

Bool imguiTextMultiline(String textFieldName, String text, Number textFieldWidth, Number textFieldHeight) /* -> Bool state */ {
  void * args[] = {
    (void *)textFieldName.c_str(),
    (void *)text.c_str(),
    _gsVoidPointerFromNumber(textFieldWidth),
    _gsVoidPointerFromNumber(textFieldHeight),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImguiTextMultiline(0, 0, 0, args));
}

Bool imguiInputText(String textFieldName, Number outPointerToString, Number outPointerToStringBytesFirst, Number outPointerToStringBytesCountMax) /* -> Bool state */ {
  void * args[] = {
    (void *)textFieldName.c_str(),
    _gsVoidPointerFromNumber(outPointerToString),
    _gsVoidPointerFromNumber(outPointerToStringBytesFirst),
    _gsVoidPointerFromNumber(outPointerToStringBytesCountMax),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImguiInputText(0, 0, 0, args));
}

Bool imguiInputTextMultiline(String textFieldName, Number outPointerToString, Number outPointerToStringBytesFirst, Number outPointerToStringBytesCountMax, Number textFieldWidth, Number textFieldHeight) /* -> Bool state */ {
  void * args[] = {
    (void *)textFieldName.c_str(),
    _gsVoidPointerFromNumber(outPointerToString),
    _gsVoidPointerFromNumber(outPointerToStringBytesFirst),
    _gsVoidPointerFromNumber(outPointerToStringBytesCountMax),
    _gsVoidPointerFromNumber(textFieldWidth),
    _gsVoidPointerFromNumber(textFieldHeight),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureImguiInputTextMultiline(0, 0, 0, args));
}

void profileBegin(String mark) {
  void * args[] = {
    (void *)mark.c_str(),
  };
  _gsCProcedureProfileBegin(0, 0, 0, args);
}

void profileEnd(String mark) {
  void * args[] = {
    (void *)mark.c_str(),
  };
  _gsCProcedureProfileEnd(0, 0, 0, args);
}

String systemCommand(String command) /* -> String output */ {
  void * args[] = {
    (void *)command.c_str(),
  };
  const char * output = (const char *)_gsCProcedureSystemCommand(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Bool glGetIntegerv(Number glenum, Number outPointer, Number outPointerBytesFirst) /* -> Bool success */ {
  void * args[] = {
    _gsVoidPointerFromNumber(glenum),
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureGlGetIntegerv(0, 0, 0, args));
}

Number getUniqueNumber() /* -> Number uniqueNumber */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetUniqueNumber(0, 0, 0, 0));
}

Number getUint64Max() /* -> Number uint64Max */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetUint64Max(0, 0, 0, 0));
}

Number getLibGameHandle() /* -> Number handle */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLibGameHandle(0, 0, 0, 0));
}

Number getLibThread2Handle() /* -> Number handle */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLibThread2Handle(0, 0, 0, 0));
}

Number getGlfwWindowHandle() /* -> Number handle */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetGlfwWindowHandle(0, 0, 0, 0));
}

Number getLastDragAndDropCounter() /* -> Number counter */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLastDragAndDropCounter(0, 0, 0, 0));
}

Number getLastDragAndDropFilepathsCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLastDragAndDropFilepathsCount(0, 0, 0, 0));
}

String getLastDragAndDropFilepath(Number index) /* -> String filepath */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetLastDragAndDropFilepath(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number getLastDragAndDropPositionX() /* -> Number x */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLastDragAndDropPositionX(0, 0, 0, 0));
}

Number getLastDragAndDropPositionY() /* -> Number y */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetLastDragAndDropPositionY(0, 0, 0, 0));
}

Number githubR_lyehLz4xEncode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount, Number flags) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(pointerBytesCount),
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(outPointerBytesCount),
    _gsVoidPointerFromNumber(flags),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGithubR_lyehLz4xEncode(0, 0, 0, args));
}

Number githubR_lyehLz4xDecode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(pointerBytesCount),
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(outPointerBytesCount),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGithubR_lyehLz4xDecode(0, 0, 0, args));
}

Number githubR_lyehLz4xBoundsEncodeOutBytesCount(Number bytesCount, Number flags) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(bytesCount),
    _gsVoidPointerFromNumber(flags),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGithubR_lyehLz4xBoundsEncodeOutBytesCount(0, 0, 0, args));
}

Number githubR_lyehUlzEncode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount, Number flags) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(pointerBytesCount),
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(outPointerBytesCount),
    _gsVoidPointerFromNumber(flags),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGithubR_lyehUlzEncode(0, 0, 0, args));
}

Number githubR_lyehUlzDecode(Number pointer, Number pointerBytesFirst, Number pointerBytesCount, Number outPointer, Number outPointerBytesFirst, Number outPointerBytesCount) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
    _gsVoidPointerFromNumber(pointerBytesCount),
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(outPointerBytesCount),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGithubR_lyehUlzDecode(0, 0, 0, args));
}

Number githubR_lyehUlzBoundsEncodeOutBytesCount(Number bytesCount, Number flags) /* -> Number value */ {
  void * args[] = {
    _gsVoidPointerFromNumber(bytesCount),
    _gsVoidPointerFromNumber(flags),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGithubR_lyehUlzBoundsEncodeOutBytesCount(0, 0, 0, args));
}

void thread2Run() {
  _gsCProcedureThread2Run(0, 0, 0, 0);
}

void thread2StopAndWaitFor() {
  _gsCProcedureThread2StopAndWaitFor(0, 0, 0, 0);
}

Bool thread2IsRunning() /* -> Bool isRunning */ {
  return _gsBoolFromVoidPointer(_gsCProcedureThread2IsRunning(0, 0, 0, 0));
}

String getGameScriptString() /* -> String script */ {
  const char * output = (const char *)_gsCProcedureGetGameScriptString(0, 0, 0, 0);
  String out = output;
  free((void *)output);
  return out;
}

void setGameScriptStringForNextFrame(String string) {
  void * args[] = {
    (void *)string.c_str(),
  };
  _gsCProcedureSetGameScriptStringForNextFrame(0, 0, 0, args);
}

void setGameScriptStringForNextFrameFromPointer(Number pointer, Number pointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  _gsCProcedureSetGameScriptStringForNextFrameFromPointer(0, 0, 0, args);
}

String getThread2ScriptString() /* -> String script */ {
  const char * output = (const char *)_gsCProcedureGetThread2ScriptString(0, 0, 0, 0);
  String out = output;
  free((void *)output);
  return out;
}

void setThread2ScriptStringForNextFrame(String string) {
  void * args[] = {
    (void *)string.c_str(),
  };
  _gsCProcedureSetThread2ScriptStringForNextFrame(0, 0, 0, args);
}

void setThread2ScriptStringForNextFrameFromPointer(Number pointer, Number pointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  _gsCProcedureSetThread2ScriptStringForNextFrameFromPointer(0, 0, 0, args);
}

void libGameScriptExternalProcedureReload(Bool printErrors) {
  void * args[] = {
    _gsVoidPointerFromBool(printErrors),
  };
  _gsCProcedureLibGameScriptExternalProcedureReload(0, 0, 0, args);
}

void libGameScriptExternalProcedureCall2(Number parameter1, Number parameter2) {
  void * args[] = {
    _gsVoidPointerFromNumber(parameter1),
    _gsVoidPointerFromNumber(parameter2),
  };
  _gsCProcedureLibGameScriptExternalProcedureCall2(0, 0, 0, args);
}

void libGameScriptExternalProcedureCall3(Number parameter1, Number parameter2, Number parameter3) {
  void * args[] = {
    _gsVoidPointerFromNumber(parameter1),
    _gsVoidPointerFromNumber(parameter2),
    _gsVoidPointerFromNumber(parameter3),
  };
  _gsCProcedureLibGameScriptExternalProcedureCall3(0, 0, 0, args);
}

Number programGetArgumentsCount() /* -> Number argumentsCount */ {
  return _gsNumberFromVoidPointer(_gsCProcedureProgramGetArgumentsCount(0, 0, 0, 0));
}

String programGetArgument(Number index) /* -> String argument */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureProgramGetArgument(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

void programClose() {
  _gsCProcedureProgramClose(0, 0, 0, 0);
}

Number globalMeshesGetCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesGetCount(0, 0, 0, 0));
}

Number globalMeshesPersistentGetCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesPersistentGetCount(0, 0, 0, 0));
}

String globalMeshesGetMeshLabelByMeshIndex(Number index) /* -> String label */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGlobalMeshesGetMeshLabelByMeshIndex(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

String globalMeshesPersistentGetMeshLabelByMeshIndex(Number index) /* -> String label */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGlobalMeshesPersistentGetMeshLabelByMeshIndex(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number globalMeshesGetMeshHandleByMeshIndex(Number index) /* -> Number handle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesGetMeshHandleByMeshIndex(0, 0, 0, args));
}

Number globalMeshesPersistentGetMeshHandleByMeshIndex(Number index) /* -> Number handle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesPersistentGetMeshHandleByMeshIndex(0, 0, 0, args));
}

Number globalMeshesGetHaveVerticesChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesGetHaveVerticesChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesGetHaveColorsChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesGetHaveColorsChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesGetHaveTexCoordsChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesGetHaveTexCoordsChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesGetHaveIndicesChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesGetHaveIndicesChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesPersistentGetHaveVerticesChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesPersistentGetHaveVerticesChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesPersistentGetHaveColorsChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesPersistentGetHaveColorsChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesPersistentGetHaveTexCoordsChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesPersistentGetHaveTexCoordsChangedMeshIndexesCount(0, 0, 0, 0));
}

Number globalMeshesPersistentGetHaveIndicesChangedMeshIndexesCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalMeshesPersistentGetHaveIndicesChangedMeshIndexesCount(0, 0, 0, 0));
}

NumberArray globalMeshesGetHaveVerticesChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesGetHaveVerticesChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesGetHaveColorsChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesGetHaveColorsChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesGetHaveTexCoordsChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesGetHaveTexCoordsChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesGetHaveIndicesChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesGetHaveIndicesChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesPersistentGetHaveVerticesChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesPersistentGetHaveVerticesChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesPersistentGetHaveColorsChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesPersistentGetHaveColorsChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesPersistentGetHaveTexCoordsChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesPersistentGetHaveTexCoordsChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

NumberArray globalMeshesPersistentGetHaveIndicesChangedMeshIndexes(Number count) /* -> Number indexes [] */ {
  void * args[] = {
    _gsVoidPointerFromNumber(count),
  };
  Number * output = (Number *)_gsCProcedureGlobalMeshesPersistentGetHaveIndicesChangedMeshIndexes(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + (uint64_t)count); }
  free(output);
  return out;
}

Number globalKeyPropertyGetKeyLabelsCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalKeyPropertyGetKeyLabelsCount(0, 0, 0, 0));
}

Bool globalKeyPropertyIsKeyLabelExists(String key) /* -> Bool exists */ {
  void * args[] = {
    (void *)key.c_str(),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureGlobalKeyPropertyIsKeyLabelExists(0, 0, 0, args));
}

String globalKeyPropertyGetKeyLabelByKeyIndex(Number index) /* -> String label */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGlobalKeyPropertyGetKeyLabelByKeyIndex(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number globalKeyPropertyGetKeyPropertyLabelsCount(String key) /* -> Number count */ {
  void * args[] = {
    (void *)key.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalKeyPropertyGetKeyPropertyLabelsCount(0, 0, 0, args));
}

Bool globalKeyPropertyIsKeyPropertyLabelExists(String key, String property) /* -> Bool exists */ {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureGlobalKeyPropertyIsKeyPropertyLabelExists(0, 0, 0, args));
}

String globalKeyPropertyGetKeyPropertyLabelByPropertyIndex(String key, Number index) /* -> String label */ {
  void * args[] = {
    (void *)key.c_str(),
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGlobalKeyPropertyGetKeyPropertyLabelByPropertyIndex(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

void globalKeyPropertyRemoveKey(String key) {
  void * args[] = {
    (void *)key.c_str(),
  };
  _gsCProcedureGlobalKeyPropertyRemoveKey(0, 0, 0, args);
}

void globalKeyPropertyRemoveAllKeys() {
  _gsCProcedureGlobalKeyPropertyRemoveAllKeys(0, 0, 0, 0);
}

void globalKeyPropertyRemoveProperty(String key, String property) {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
  };
  _gsCProcedureGlobalKeyPropertyRemoveProperty(0, 0, 0, args);
}

void globalKeyPropertyRemoveAllProperties(String key) {
  void * args[] = {
    (void *)key.c_str(),
  };
  _gsCProcedureGlobalKeyPropertyRemoveAllProperties(0, 0, 0, args);
}

void globalKeyPropertySetString(String key, String property, String value) {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
    (void *)value.c_str(),
  };
  _gsCProcedureGlobalKeyPropertySetString(0, 0, 0, args);
}

void globalKeyPropertySetNumber(String key, String property, Number value) {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(value),
  };
  _gsCProcedureGlobalKeyPropertySetNumber(0, 0, 0, args);
}

void globalKeyPropertySetBool(String key, String property, Bool value) {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
    _gsVoidPointerFromBool(value),
  };
  _gsCProcedureGlobalKeyPropertySetBool(0, 0, 0, args);
}

String globalKeyPropertyGetString(String key, String property) /* -> String value */ {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
  };
  const char * output = (const char *)_gsCProcedureGlobalKeyPropertyGetString(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number globalKeyPropertyGetNumber(String key, String property) /* -> Number value */ {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureGlobalKeyPropertyGetNumber(0, 0, 0, args));
}

Bool globalKeyPropertyGetBool(String key, String property) /* -> Bool value */ {
  void * args[] = {
    (void *)key.c_str(),
    (void *)property.c_str(),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureGlobalKeyPropertyGetBool(0, 0, 0, args));
}

Number getCurrentFrameThread2() /* -> Number frameOfThread2 */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetCurrentFrameThread2(0, 0, 0, 0));
}

void setCurrentFrameThread2(Number frameOfThread2) {
  void * args[] = {
    _gsVoidPointerFromNumber(frameOfThread2),
  };
  _gsCProcedureSetCurrentFrameThread2(0, 0, 0, args);
}

Bool threadWaitForThread1FrameToFinish(Number thread1Frame) /* -> Bool trueIfFinishedFalseIfAborted */ {
  void * args[] = {
    _gsVoidPointerFromNumber(thread1Frame),
  };
  return _gsBoolFromVoidPointer(_gsCProcedureThreadWaitForThread1FrameToFinish(0, 0, 0, args));
}

Number ertAffineSpace3fGetSizeOfInBytes() /* -> Number sizeOfInBytes */ {
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetSizeOfInBytes(0, 0, 0, 0));
}

void ertAffineSpace3fSetDefaultInitialize(Number outPointer, Number outPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
  };
  _gsCProcedureErtAffineSpace3fSetDefaultInitialize(0, 0, 0, args);
}

void ertAffineSpace3fSetInitialize(Number outPointer, Number outPointerBytesFirst, Number v0, Number v1, Number v2, Number v3, Number v4, Number v5, Number v6, Number v7, Number v8, Number v9, Number v10, Number v11) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(v0),
    _gsVoidPointerFromNumber(v1),
    _gsVoidPointerFromNumber(v2),
    _gsVoidPointerFromNumber(v3),
    _gsVoidPointerFromNumber(v4),
    _gsVoidPointerFromNumber(v5),
    _gsVoidPointerFromNumber(v6),
    _gsVoidPointerFromNumber(v7),
    _gsVoidPointerFromNumber(v8),
    _gsVoidPointerFromNumber(v9),
    _gsVoidPointerFromNumber(v10),
    _gsVoidPointerFromNumber(v11),
  };
  _gsCProcedureErtAffineSpace3fSetInitialize(0, 0, 0, args);
}

void ertAffineSpace3fSetLookAtPoint(Number outPointer, Number outPointerBytesFirst, Number posX, Number posY, Number posZ, Number targetX, Number targetY, Number targetZ, Number upX, Number upY, Number upZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(posX),
    _gsVoidPointerFromNumber(posY),
    _gsVoidPointerFromNumber(posZ),
    _gsVoidPointerFromNumber(targetX),
    _gsVoidPointerFromNumber(targetY),
    _gsVoidPointerFromNumber(targetZ),
    _gsVoidPointerFromNumber(upX),
    _gsVoidPointerFromNumber(upY),
    _gsVoidPointerFromNumber(upZ),
  };
  _gsCProcedureErtAffineSpace3fSetLookAtPoint(0, 0, 0, args);
}

void ertAffineSpace3fScale(Number outPointer, Number outPointerBytesFirst, Number scaleX, Number scaleY, Number scaleZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(scaleX),
    _gsVoidPointerFromNumber(scaleY),
    _gsVoidPointerFromNumber(scaleZ),
  };
  _gsCProcedureErtAffineSpace3fScale(0, 0, 0, args);
}

void ertAffineSpace3fTranslate(Number outPointer, Number outPointerBytesFirst, Number translateX, Number translateY, Number translateZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(translateX),
    _gsVoidPointerFromNumber(translateY),
    _gsVoidPointerFromNumber(translateZ),
  };
  _gsCProcedureErtAffineSpace3fTranslate(0, 0, 0, args);
}

void ertAffineSpace3fRotate(Number outPointer, Number outPointerBytesFirst, Number rotatePosX, Number rotatePosY, Number rotatePosZ, Number rotateAxisX, Number rotateAxisY, Number rotateAxisZ, Number rotateAngle) {
  void * args[] = {
    _gsVoidPointerFromNumber(outPointer),
    _gsVoidPointerFromNumber(outPointerBytesFirst),
    _gsVoidPointerFromNumber(rotatePosX),
    _gsVoidPointerFromNumber(rotatePosY),
    _gsVoidPointerFromNumber(rotatePosZ),
    _gsVoidPointerFromNumber(rotateAxisX),
    _gsVoidPointerFromNumber(rotateAxisY),
    _gsVoidPointerFromNumber(rotateAxisZ),
    _gsVoidPointerFromNumber(rotateAngle),
  };
  _gsCProcedureErtAffineSpace3fRotate(0, 0, 0, args);
}

Number ertAffineSpace3fGetLVXX(Number pointer, Number pointerBytesFirst) /* -> Number l_vx_x */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVXX(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVXY(Number pointer, Number pointerBytesFirst) /* -> Number l_vx_y */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVXY(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVXZ(Number pointer, Number pointerBytesFirst) /* -> Number l_vx_z */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVXZ(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVYX(Number pointer, Number pointerBytesFirst) /* -> Number l_vy_x */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVYX(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVYY(Number pointer, Number pointerBytesFirst) /* -> Number l_vy_y */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVYY(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVYZ(Number pointer, Number pointerBytesFirst) /* -> Number l_vy_z */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVYZ(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVZX(Number pointer, Number pointerBytesFirst) /* -> Number l_vz_x */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVZX(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVZY(Number pointer, Number pointerBytesFirst) /* -> Number l_vz_y */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVZY(0, 0, 0, args));
}

Number ertAffineSpace3fGetLVZZ(Number pointer, Number pointerBytesFirst) /* -> Number l_vz_z */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetLVZZ(0, 0, 0, args));
}

Number ertAffineSpace3fGetPX(Number pointer, Number pointerBytesFirst) /* -> Number p_x */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetPX(0, 0, 0, args));
}

Number ertAffineSpace3fGetPY(Number pointer, Number pointerBytesFirst) /* -> Number p_y */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetPY(0, 0, 0, args));
}

Number ertAffineSpace3fGetPZ(Number pointer, Number pointerBytesFirst) /* -> Number p_z */ {
  void * args[] = {
    _gsVoidPointerFromNumber(pointer),
    _gsVoidPointerFromNumber(pointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtAffineSpace3fGetPZ(0, 0, 0, args));
}

void ertAffineSpace3fCopyFromArray(Number in12FloatsPointer, Number in12FloatsPointerBytesFirst, Number outAffineSpace3fPointer, Number outAffineSpace3fPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(in12FloatsPointer),
    _gsVoidPointerFromNumber(in12FloatsPointerBytesFirst),
    _gsVoidPointerFromNumber(outAffineSpace3fPointer),
    _gsVoidPointerFromNumber(outAffineSpace3fPointerBytesFirst),
  };
  _gsCProcedureErtAffineSpace3fCopyFromArray(0, 0, 0, args);
}

void ertAffineSpace3fCopyToArray(Number inAffineSpace3fPointer, Number inAffineSpace3fPointerBytesFirst, Number out12FloatsPointer, Number out12FloatsPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(inAffineSpace3fPointer),
    _gsVoidPointerFromNumber(inAffineSpace3fPointerBytesFirst),
    _gsVoidPointerFromNumber(out12FloatsPointer),
    _gsVoidPointerFromNumber(out12FloatsPointerBytesFirst),
  };
  _gsCProcedureErtAffineSpace3fCopyToArray(0, 0, 0, args);
}

Number ertCreateDevice(String typeDefaultIsdefault, Number numThreadsDefaultIs0) /* -> Number deviceHandle */ {
  void * args[] = {
    (void *)typeDefaultIsdefault.c_str(),
    _gsVoidPointerFromNumber(numThreadsDefaultIs0),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtCreateDevice(0, 0, 0, args));
}

void ertDestroyDevice(Number deviceHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
  };
  _gsCProcedureErtDestroyDevice(0, 0, 0, args);
}

Number ertNewCamera(Number deviceHandle, String type) /* -> Number cameraHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewCamera(0, 0, 0, args));
}

Number ertNewData(Number deviceHandle, String type, Number bytes, Number dataPointer, Number dataPointerBytesFirst) /* -> Number dataHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
    _gsVoidPointerFromNumber(bytes),
    _gsVoidPointerFromNumber(dataPointer),
    _gsVoidPointerFromNumber(dataPointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewData(0, 0, 0, args));
}

Number ertNewDataFromFile(Number deviceHandle, String type, String file, Number offset, Number bytes) /* -> Number dataHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
    (void *)file.c_str(),
    _gsVoidPointerFromNumber(offset),
    _gsVoidPointerFromNumber(bytes),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewDataFromFile(0, 0, 0, args));
}

Number ertNewImage(Number deviceHandle, String type, Number width, Number height, Number dataPointer, Number dataPointerBytesFirst) /* -> Number imageHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromNumber(dataPointer),
    _gsVoidPointerFromNumber(dataPointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewImage(0, 0, 0, args));
}

Number ertNewImageFromFile(Number deviceHandle, String file) /* -> Number imageHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)file.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewImageFromFile(0, 0, 0, args));
}

Number ertNewTexture(Number deviceHandle, String type) /* -> Number textureHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewTexture(0, 0, 0, args));
}

Number ertNewMaterial(Number deviceHandle, String type) /* -> Number materialHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewMaterial(0, 0, 0, args));
}

Number ertNewShape(Number deviceHandle, String type) /* -> Number shapeHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewShape(0, 0, 0, args));
}

Number ertNewLight(Number deviceHandle, String type) /* -> Number lightHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewLight(0, 0, 0, args));
}

Number ertNewShapePrimitive(Number deviceHandle, Number shapeHandle, Number materialHandle, Number transformPointer, Number transformPointerBytesFirst) /* -> Number primitiveHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(shapeHandle),
    _gsVoidPointerFromNumber(materialHandle),
    _gsVoidPointerFromNumber(transformPointer),
    _gsVoidPointerFromNumber(transformPointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewShapePrimitive(0, 0, 0, args));
}

Number ertNewLightPrimitive(Number deviceHandle, Number lightHandle, Number transformPointer, Number transformPointerBytesFirst) /* -> Number primitiveHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(lightHandle),
    _gsVoidPointerFromNumber(transformPointer),
    _gsVoidPointerFromNumber(transformPointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewLightPrimitive(0, 0, 0, args));
}

Number ertTransformPrimitive(Number deviceHandle, Number primitiveHandle, Number transformPointer, Number transformPointerBytesFirst) /* -> Number primitiveHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(primitiveHandle),
    _gsVoidPointerFromNumber(transformPointer),
    _gsVoidPointerFromNumber(transformPointerBytesFirst),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtTransformPrimitive(0, 0, 0, args));
}

Number ertNewScene(Number deviceHandle, String type, Number primitiveHandlesPointer, Number primitiveHandlesPointerBytesFirst, Number size) /* -> Number sceneHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
    _gsVoidPointerFromNumber(primitiveHandlesPointer),
    _gsVoidPointerFromNumber(primitiveHandlesPointerBytesFirst),
    _gsVoidPointerFromNumber(size),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewScene(0, 0, 0, args));
}

Number ertNewToneMapper(Number deviceHandle, String type) /* -> Number toneMapperHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewToneMapper(0, 0, 0, args));
}

Number ertNewRenderer(Number deviceHandle, String type) /* -> Number rendererHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewRenderer(0, 0, 0, args));
}

Number ertNewFrameBuffer(Number deviceHandle, String type, Number width, Number height, Number buffersDefaultIs1) /* -> Number frameBufferHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    (void *)type.c_str(),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromNumber(buffersDefaultIs1),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtNewFrameBuffer(0, 0, 0, args));
}

Number ertGetFrameBufferWidth(Number deviceHandle, Number frameBufferHandle) /* -> Number width */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(frameBufferHandle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtGetFrameBufferWidth(0, 0, 0, args));
}

Number ertGetFrameBufferHeight(Number deviceHandle, Number frameBufferHandle) /* -> Number height */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(frameBufferHandle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtGetFrameBufferHeight(0, 0, 0, args));
}

Number ertMapFrameBuffer(Number deviceHandle, Number frameBufferHandle) /* -> Number pointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(frameBufferHandle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureErtMapFrameBuffer(0, 0, 0, args));
}

void ertUnmapFrameBuffer(Number deviceHandle, Number frameBufferHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(frameBufferHandle),
  };
  _gsCProcedureErtUnmapFrameBuffer(0, 0, 0, args);
}

void ertSwapBuffers(Number deviceHandle, Number frameBufferHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(frameBufferHandle),
  };
  _gsCProcedureErtSwapBuffers(0, 0, 0, args);
}

void ertIncRef(Number deviceHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureErtIncRef(0, 0, 0, args);
}

void ertDecRef(Number deviceHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureErtDecRef(0, 0, 0, args);
}

void ertSetBool1(Number deviceHandle, Number handle, String property, Bool x) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromBool(x),
  };
  _gsCProcedureErtSetBool1(0, 0, 0, args);
}

void ertSetBool2(Number deviceHandle, Number handle, String property, Bool x, Bool y) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromBool(x),
    _gsVoidPointerFromBool(y),
  };
  _gsCProcedureErtSetBool2(0, 0, 0, args);
}

void ertSetBool3(Number deviceHandle, Number handle, String property, Bool x, Bool y, Bool z) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromBool(x),
    _gsVoidPointerFromBool(y),
    _gsVoidPointerFromBool(z),
  };
  _gsCProcedureErtSetBool3(0, 0, 0, args);
}

void ertSetBool4(Number deviceHandle, Number handle, String property, Bool x, Bool y, Bool z, Bool w) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromBool(x),
    _gsVoidPointerFromBool(y),
    _gsVoidPointerFromBool(z),
    _gsVoidPointerFromBool(w),
  };
  _gsCProcedureErtSetBool4(0, 0, 0, args);
}

void ertSetInt1(Number deviceHandle, Number handle, String property, Number x) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
  };
  _gsCProcedureErtSetInt1(0, 0, 0, args);
}

void ertSetInt2(Number deviceHandle, Number handle, String property, Number x, Number y) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
  };
  _gsCProcedureErtSetInt2(0, 0, 0, args);
}

void ertSetInt3(Number deviceHandle, Number handle, String property, Number x, Number y, Number z) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureErtSetInt3(0, 0, 0, args);
}

void ertSetInt4(Number deviceHandle, Number handle, String property, Number x, Number y, Number z, Number w) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(w),
  };
  _gsCProcedureErtSetInt4(0, 0, 0, args);
}

void ertSetFloat1(Number deviceHandle, Number handle, String property, Number x) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
  };
  _gsCProcedureErtSetFloat1(0, 0, 0, args);
}

void ertSetFloat2(Number deviceHandle, Number handle, String property, Number x, Number y) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
  };
  _gsCProcedureErtSetFloat2(0, 0, 0, args);
}

void ertSetFloat3(Number deviceHandle, Number handle, String property, Number x, Number y, Number z) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureErtSetFloat3(0, 0, 0, args);
}

void ertSetFloat4(Number deviceHandle, Number handle, String property, Number x, Number y, Number z, Number w) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(w),
  };
  _gsCProcedureErtSetFloat4(0, 0, 0, args);
}

void ertSetArray(Number deviceHandle, Number handle, String property, String type, Number dataHandle, Number size, Number stride, Number ofs) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    (void *)type.c_str(),
    _gsVoidPointerFromNumber(dataHandle),
    _gsVoidPointerFromNumber(size),
    _gsVoidPointerFromNumber(stride),
    _gsVoidPointerFromNumber(ofs),
  };
  _gsCProcedureErtSetArray(0, 0, 0, args);
}

void ertSetString(Number deviceHandle, Number handle, String property, String str) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    (void *)str.c_str(),
  };
  _gsCProcedureErtSetString(0, 0, 0, args);
}

void ertSetImage(Number deviceHandle, Number handle, String property, Number imageHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(imageHandle),
  };
  _gsCProcedureErtSetImage(0, 0, 0, args);
}

void ertSetTexture(Number deviceHandle, Number handle, String property, Number textureHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(textureHandle),
  };
  _gsCProcedureErtSetTexture(0, 0, 0, args);
}

void ertSetTransform(Number deviceHandle, Number handle, String property, Number transformPointer, Number transformPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
    (void *)property.c_str(),
    _gsVoidPointerFromNumber(transformPointer),
    _gsVoidPointerFromNumber(transformPointerBytesFirst),
  };
  _gsCProcedureErtSetTransform(0, 0, 0, args);
}

void ertClear(Number deviceHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureErtClear(0, 0, 0, args);
}

void ertCommit(Number deviceHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureErtCommit(0, 0, 0, args);
}

void ertRenderFrame(Number deviceHandle, Number rendererHandle, Number cameraHandle, Number sceneHandle, Number toneMapperHandle, Number frameBufferHandle, Number accumulate) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(rendererHandle),
    _gsVoidPointerFromNumber(cameraHandle),
    _gsVoidPointerFromNumber(sceneHandle),
    _gsVoidPointerFromNumber(toneMapperHandle),
    _gsVoidPointerFromNumber(frameBufferHandle),
    _gsVoidPointerFromNumber(accumulate),
  };
  _gsCProcedureErtRenderFrame(0, 0, 0, args);
}

NumberArray ertPick(Number deviceHandle, Number cameraHandle, Number x, Number y, Number sceneHandle) /* -> Number point [4] {x, y, z, isHit} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(cameraHandle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(sceneHandle),
  };
  Number * output = (Number *)_gsCProcedureErtPick(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 4); }
  free(output);
  return out;
}

void ertInitializeRayStruct(Number deviceHandle, Number orgX, Number orgY, Number orgZ, Number dirX, Number dirY, Number dirZ, Number nearDefaultIs0, Number farDefaultIsEmbreeInf, Number timeDefaultIs0, Number outRayStructPointer, Number outRayStructPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(orgX),
    _gsVoidPointerFromNumber(orgY),
    _gsVoidPointerFromNumber(orgZ),
    _gsVoidPointerFromNumber(dirX),
    _gsVoidPointerFromNumber(dirY),
    _gsVoidPointerFromNumber(dirZ),
    _gsVoidPointerFromNumber(nearDefaultIs0),
    _gsVoidPointerFromNumber(farDefaultIsEmbreeInf),
    _gsVoidPointerFromNumber(timeDefaultIs0),
    _gsVoidPointerFromNumber(outRayStructPointer),
    _gsVoidPointerFromNumber(outRayStructPointerBytesFirst),
  };
  _gsCProcedureErtInitializeRayStruct(0, 0, 0, args);
}

void ertInitializeRayStructForCameraPixelSample(Number deviceHandle, Number cameraHandle, Number pixelXFrom0To1, Number pixelYFrom0To1, Number pixelSamplePosXFrom0ToExcluded1DefaultIs0Point5, Number pixelSamplePosYFrom0ToExcluded1DefaultIs0Point5, Number outRayStructPointer, Number outRayStructPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(cameraHandle),
    _gsVoidPointerFromNumber(pixelXFrom0To1),
    _gsVoidPointerFromNumber(pixelYFrom0To1),
    _gsVoidPointerFromNumber(pixelSamplePosXFrom0ToExcluded1DefaultIs0Point5),
    _gsVoidPointerFromNumber(pixelSamplePosYFrom0ToExcluded1DefaultIs0Point5),
    _gsVoidPointerFromNumber(outRayStructPointer),
    _gsVoidPointerFromNumber(outRayStructPointerBytesFirst),
  };
  _gsCProcedureErtInitializeRayStructForCameraPixelSample(0, 0, 0, args);
}

void ertSceneIntersectRayStructToHitStruct(Number deviceHandle, Number sceneHandle, Number inRayStructPointer, Number inRayStructPointerBytesFirst, Number outHitStructPointer, Number outHitStructPointerBytesFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(sceneHandle),
    _gsVoidPointerFromNumber(inRayStructPointer),
    _gsVoidPointerFromNumber(inRayStructPointerBytesFirst),
    _gsVoidPointerFromNumber(outHitStructPointer),
    _gsVoidPointerFromNumber(outHitStructPointerBytesFirst),
  };
  _gsCProcedureErtSceneIntersectRayStructToHitStruct(0, 0, 0, args);
}

void onRerunCallErtDecRef(Number deviceHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallErtDecRef(0, 0, 0, args);
}

void onRerunCallErtDestroyDevice(Number deviceHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(deviceHandle),
  };
  _gsCProcedureOnRerunCallErtDestroyDevice(0, 0, 0, args);
}

Number getRedStructsCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetRedStructsCount(0, 0, 0, 0));
}

String getRedStructName(Number index) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetRedStructName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number getRedStructMembersCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetRedStructMembersCount(0, 0, 0, 0));
}

String getRedStructMemberName(Number index) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetRedStructMemberName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number redStructSizeof(String structName) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)structName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedStructSizeof(0, 0, 0, args));
}

Number redStructMemberSizeof(String structName, String structMemberName) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedStructMemberSizeof(0, 0, 0, args));
}

Number redStructMemberOffsetof(String structName, String structMemberName) /* -> Number bytesFirst */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedStructMemberOffsetof(0, 0, 0, args));
}

Number redStructMemberTypeof(String structName, String structMemberName) /* -> Number structMemberType */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedStructMemberTypeof(0, 0, 0, args));
}

Number redCreateContext(Bool enableDebugMode) /* -> Number context */ {
  void * args[] = {
    _gsVoidPointerFromBool(enableDebugMode),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateContext(0, 0, 0, args));
}

Number redCreateContextWithRayTracingFeatureLevel1(Bool enableDebugMode) /* -> Number context */ {
  void * args[] = {
    _gsVoidPointerFromBool(enableDebugMode),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateContextWithRayTracingFeatureLevel1(0, 0, 0, args));
}

Number redCreateContextWithRayTracingFeatureLevel2(Bool enableDebugMode) /* -> Number context */ {
  void * args[] = {
    _gsVoidPointerFromBool(enableDebugMode),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateContextWithRayTracingFeatureLevel2(0, 0, 0, args));
}

Number redHandleContextGetProcAddr(Number contextHandle, String procedureName) /* -> Number address */ {
  void * args[] = {
    _gsVoidPointerFromNumber(contextHandle),
    (void *)procedureName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedHandleContextGetProcAddr(0, 0, 0, args));
}

void redMemoryGetBudget(Number context, Number gpuHandle, Number outMemoryBudget, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(outMemoryBudget),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedMemoryGetBudget(0, 0, 0, args);
}

Number redMemoryAllocate(Number context, Number gpuHandle, String handleName, Number bytesCount, Number memoryTypeIndex, Number dedicateToArray, Number dedicateToImage, Number memoryBitflags, Number outStatuses) /* -> Number memoryHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(bytesCount),
    _gsVoidPointerFromNumber(memoryTypeIndex),
    _gsVoidPointerFromNumber(dedicateToArray),
    _gsVoidPointerFromNumber(dedicateToImage),
    _gsVoidPointerFromNumber(memoryBitflags),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedMemoryAllocate(0, 0, 0, args));
}

Number redMemoryAllocateMappable(Number context, Number gpuHandle, String handleName, Bool dedicate, Number array, Number arrayMemoryBytesCount, Number memoryTypeIndex, Number memoryBitflags, Number outStatuses) /* -> Number memoryHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromBool(dedicate),
    _gsVoidPointerFromNumber(array),
    _gsVoidPointerFromNumber(arrayMemoryBytesCount),
    _gsVoidPointerFromNumber(memoryTypeIndex),
    _gsVoidPointerFromNumber(memoryBitflags),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedMemoryAllocateMappable(0, 0, 0, args));
}

void redMemoryFree(Number context, Number gpuHandle, Number memory) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(memory),
  };
  _gsCProcedureRedMemoryFree(0, 0, 0, args);
}

void redMemorySet(Number context, Number gpuHandle, Number memoryArraysCount, Number memoryArrays, Number memoryImagesCount, Number memoryImages, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(memoryArraysCount),
    _gsVoidPointerFromNumber(memoryArrays),
    _gsVoidPointerFromNumber(memoryImagesCount),
    _gsVoidPointerFromNumber(memoryImages),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedMemorySet(0, 0, 0, args);
}

Number redMemoryMap(Number context, Number gpuHandle, Number mappableMemory, Number mappableMemoryBytesFirst, Number mappableMemoryBytesCount, Number outStatuses) /* -> Number pointer */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(mappableMemory),
    _gsVoidPointerFromNumber(mappableMemoryBytesFirst),
    _gsVoidPointerFromNumber(mappableMemoryBytesCount),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedMemoryMap(0, 0, 0, args));
}

void redMemoryUnmap(Number context, Number gpuHandle, Number mappableMemory) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(mappableMemory),
  };
  _gsCProcedureRedMemoryUnmap(0, 0, 0, args);
}

void redMemoryNonCoherentFlush(Number context, Number gpuHandle, Number mappableMemoryRangesCount, Number mappableMemoryRanges, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(mappableMemoryRangesCount),
    _gsVoidPointerFromNumber(mappableMemoryRanges),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedMemoryNonCoherentFlush(0, 0, 0, args);
}

void redMemoryNonCoherentInvalidate(Number context, Number gpuHandle, Number mappableMemoryRangesCount, Number mappableMemoryRanges, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(mappableMemoryRangesCount),
    _gsVoidPointerFromNumber(mappableMemoryRanges),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedMemoryNonCoherentInvalidate(0, 0, 0, args);
}

Number redStructsMemoryAllocate(Number context, Number gpuHandle, String handleName, Number maxStructsCount, Number maxStructsMembersOfTypeArrayROConstantCount, Number maxStructsMembersOfTypeArrayROOrArrayRWCount, Number maxStructsMembersOfTypeTextureROCount, Number maxStructsMembersOfTypeTextureRWCount, Number outStatuses) /* -> Number structsMemoryHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(maxStructsCount),
    _gsVoidPointerFromNumber(maxStructsMembersOfTypeArrayROConstantCount),
    _gsVoidPointerFromNumber(maxStructsMembersOfTypeArrayROOrArrayRWCount),
    _gsVoidPointerFromNumber(maxStructsMembersOfTypeTextureROCount),
    _gsVoidPointerFromNumber(maxStructsMembersOfTypeTextureRWCount),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedStructsMemoryAllocate(0, 0, 0, args));
}

Number redStructsMemoryAllocateSamplers(Number context, Number gpuHandle, String handleName, Number maxStructsCount, Number maxStructsMembersOfTypeSamplerCount, Number outStatuses) /* -> Number structsMemoryHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(maxStructsCount),
    _gsVoidPointerFromNumber(maxStructsMembersOfTypeSamplerCount),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedStructsMemoryAllocateSamplers(0, 0, 0, args));
}

void redStructsMemorySuballocateStructs(Number context, Number gpuHandle, Number handleNames, Number structsMemory, Number structsDeclarationsCount, Number structsDeclarations, Number outStructs, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handleNames),
    _gsVoidPointerFromNumber(structsMemory),
    _gsVoidPointerFromNumber(structsDeclarationsCount),
    _gsVoidPointerFromNumber(structsDeclarations),
    _gsVoidPointerFromNumber(outStructs),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedStructsMemorySuballocateStructs(0, 0, 0, args);
}

void redStructsMemoryReset(Number context, Number gpuHandle, Number structsMemory, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(structsMemory),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedStructsMemoryReset(0, 0, 0, args);
}

void redStructsMemoryFree(Number context, Number gpuHandle, Number structsMemory) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(structsMemory),
  };
  _gsCProcedureRedStructsMemoryFree(0, 0, 0, args);
}

void redStructsSet(Number context, Number gpuHandle, Number structsMembersCount, Number structsMembers) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(structsMembersCount),
    _gsVoidPointerFromNumber(structsMembers),
  };
  _gsCProcedureRedStructsSet(0, 0, 0, args);
}

Number redCreateArray(Number context, Number gpuHandle, String handleName, Number type, Number bytesCount, Number structuredBufferElementBytesCount, Number initialAccess, Number initialQueueFamilyIndex, Bool dedicate, Number outArray, Number outStatuses) /* -> Number arrayHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(type),
    _gsVoidPointerFromNumber(bytesCount),
    _gsVoidPointerFromNumber(structuredBufferElementBytesCount),
    _gsVoidPointerFromNumber(initialAccess),
    _gsVoidPointerFromNumber(initialQueueFamilyIndex),
    _gsVoidPointerFromBool(dedicate),
    _gsVoidPointerFromNumber(outArray),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateArray(0, 0, 0, args));
}

Number redCreateImage(Number context, Number gpuHandle, String handleName, Number dimensions, Number format, Number width, Number height, Number depth, Number levelsCount, Number layersCount, Number multisampleCount, Number restrictToAccess, Number initialAccess, Number initialQueueFamilyIndex, Bool dedicate, Number outImage, Number outStatuses) /* -> Number imageHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(dimensions),
    _gsVoidPointerFromNumber(format),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromNumber(depth),
    _gsVoidPointerFromNumber(levelsCount),
    _gsVoidPointerFromNumber(layersCount),
    _gsVoidPointerFromNumber(multisampleCount),
    _gsVoidPointerFromNumber(restrictToAccess),
    _gsVoidPointerFromNumber(initialAccess),
    _gsVoidPointerFromNumber(initialQueueFamilyIndex),
    _gsVoidPointerFromBool(dedicate),
    _gsVoidPointerFromNumber(outImage),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateImage(0, 0, 0, args));
}

Number redCreateSampler(Number context, Number gpuHandle, String handleName, Number filteringMag, Number filteringMin, Number filteringMip, Number behaviorOutsideTextureCoordinateU, Number behaviorOutsideTextureCoordinateV, Number behaviorOutsideTextureCoordinateW, Number mipLodBias, Bool enableAnisotropy, Number maxAnisotropy, Bool enableCompare, Number compareOp, Number minLod, Number maxLod, Number outStatuses) /* -> Number samplerHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(filteringMag),
    _gsVoidPointerFromNumber(filteringMin),
    _gsVoidPointerFromNumber(filteringMip),
    _gsVoidPointerFromNumber(behaviorOutsideTextureCoordinateU),
    _gsVoidPointerFromNumber(behaviorOutsideTextureCoordinateV),
    _gsVoidPointerFromNumber(behaviorOutsideTextureCoordinateW),
    _gsVoidPointerFromNumber(mipLodBias),
    _gsVoidPointerFromBool(enableAnisotropy),
    _gsVoidPointerFromNumber(maxAnisotropy),
    _gsVoidPointerFromBool(enableCompare),
    _gsVoidPointerFromNumber(compareOp),
    _gsVoidPointerFromNumber(minLod),
    _gsVoidPointerFromNumber(maxLod),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateSampler(0, 0, 0, args));
}

Number redCreateTexture(Number context, Number gpuHandle, String handleName, Number image, Number parts, Number dimensions, Number format, Number levelsFirst, Number levelsCount, Number layersFirst, Number layersCount, Number restrictToAccess, Number outStatuses) /* -> Number textureHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(image),
    _gsVoidPointerFromNumber(parts),
    _gsVoidPointerFromNumber(dimensions),
    _gsVoidPointerFromNumber(format),
    _gsVoidPointerFromNumber(levelsFirst),
    _gsVoidPointerFromNumber(levelsCount),
    _gsVoidPointerFromNumber(layersFirst),
    _gsVoidPointerFromNumber(layersCount),
    _gsVoidPointerFromNumber(restrictToAccess),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateTexture(0, 0, 0, args));
}

Number redCreateGpuCode(Number context, Number gpuHandle, String handleName, Number irBytesCount, Number ir, Number outStatuses) /* -> Number gpuCodeHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(irBytesCount),
    _gsVoidPointerFromNumber(ir),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateGpuCode(0, 0, 0, args));
}

Number redCreateOutputDeclaration(Number context, Number gpuHandle, String handleName, Number outputDeclarationMembers, Number outputDeclarationMembersResolveSources, Bool dependencyByRegion, Bool dependencyByRegionAllowUsageAliasOrderBarriers, Number outStatuses) /* -> Number outputDeclarationHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(outputDeclarationMembers),
    _gsVoidPointerFromNumber(outputDeclarationMembersResolveSources),
    _gsVoidPointerFromBool(dependencyByRegion),
    _gsVoidPointerFromBool(dependencyByRegionAllowUsageAliasOrderBarriers),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateOutputDeclaration(0, 0, 0, args));
}

Number redCreateStructDeclaration(Number context, Number gpuHandle, String handleName, Number structDeclarationMembersCount, Number structDeclarationMembers, Number structDeclarationMembersArrayROCount, Number structDeclarationMembersArrayRO, Bool procedureParametersHandlesDeclaration, Number outStatuses) /* -> Number structDeclarationHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(structDeclarationMembersCount),
    _gsVoidPointerFromNumber(structDeclarationMembers),
    _gsVoidPointerFromNumber(structDeclarationMembersArrayROCount),
    _gsVoidPointerFromNumber(structDeclarationMembersArrayRO),
    _gsVoidPointerFromBool(procedureParametersHandlesDeclaration),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateStructDeclaration(0, 0, 0, args));
}

Number redCreateProcedureParameters(Number context, Number gpuHandle, String handleName, Number procedureParametersDeclaration, Number outStatuses) /* -> Number procedureParametersHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(procedureParametersDeclaration),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateProcedureParameters(0, 0, 0, args));
}

Number redCreateProcedureCache(Number context, Number gpuHandle, String handleName, Number fromBlobBytesCount, Number fromBlob, Number outStatuses) /* -> Number procedureCacheHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(fromBlobBytesCount),
    _gsVoidPointerFromNumber(fromBlob),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateProcedureCache(0, 0, 0, args));
}

Number redCreateProcedure(Number context, Number gpuHandle, String handleName, Number procedureCache, Number outputDeclaration, Number procedureParameters, String gpuCodeVertexMainProcedureName, Number gpuCodeVertex, String gpuCodeFragmentMainProcedureName, Number gpuCodeFragment, Number state, Number stateExtension, Bool deriveBase, Number deriveFrom, Number outStatuses) /* -> Number procedureHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(procedureCache),
    _gsVoidPointerFromNumber(outputDeclaration),
    _gsVoidPointerFromNumber(procedureParameters),
    (void *)gpuCodeVertexMainProcedureName.c_str(),
    _gsVoidPointerFromNumber(gpuCodeVertex),
    (void *)gpuCodeFragmentMainProcedureName.c_str(),
    _gsVoidPointerFromNumber(gpuCodeFragment),
    _gsVoidPointerFromNumber(state),
    _gsVoidPointerFromNumber(stateExtension),
    _gsVoidPointerFromBool(deriveBase),
    _gsVoidPointerFromNumber(deriveFrom),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateProcedure(0, 0, 0, args));
}

Number redCreateProcedureCompute(Number context, Number gpuHandle, String handleName, Number procedureCache, Number procedureParameters, String gpuCodeMainProcedureName, Number gpuCode, Number outStatuses) /* -> Number procedureHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(procedureCache),
    _gsVoidPointerFromNumber(procedureParameters),
    (void *)gpuCodeMainProcedureName.c_str(),
    _gsVoidPointerFromNumber(gpuCode),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateProcedureCompute(0, 0, 0, args));
}

Number redCreateOutput(Number context, Number gpuHandle, String handleName, Number outputDeclaration, Number outputMembers, Number outputMembersResolveTargets, Number width, Number height, Number outOutput, Number outStatuses) /* -> Number outputHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(outputDeclaration),
    _gsVoidPointerFromNumber(outputMembers),
    _gsVoidPointerFromNumber(outputMembersResolveTargets),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromNumber(outOutput),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateOutput(0, 0, 0, args));
}

Number redCreateCpuSignal(Number context, Number gpuHandle, String handleName, Bool createSignaled, Number outStatuses) /* -> Number cpuSignalHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromBool(createSignaled),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateCpuSignal(0, 0, 0, args));
}

Number redCreateGpuSignal(Number context, Number gpuHandle, String handleName, Number outStatuses) /* -> Number gpuSignalHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateGpuSignal(0, 0, 0, args));
}

Number redCreateGpuToCpuSignal(Number context, Number gpuHandle, String handleName, Number outStatuses) /* -> Number gpuToCpuHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateGpuToCpuSignal(0, 0, 0, args));
}

void redCreateCalls(Number context, Number gpuHandle, String handleName, Number queueFamilyIndex, Number outCalls, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(queueFamilyIndex),
    _gsVoidPointerFromNumber(outCalls),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedCreateCalls(0, 0, 0, args);
}

void redCreateCallsReusable(Number context, Number gpuHandle, String handleName, Number queueFamilyIndex, Number outCalls, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(queueFamilyIndex),
    _gsVoidPointerFromNumber(outCalls),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedCreateCallsReusable(0, 0, 0, args);
}

void redDestroyContext(Number context) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
  };
  _gsCProcedureRedDestroyContext(0, 0, 0, args);
}

void redDestroyArray(Number context, Number gpuHandle, Number array) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(array),
  };
  _gsCProcedureRedDestroyArray(0, 0, 0, args);
}

void redDestroyImage(Number context, Number gpuHandle, Number image) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(image),
  };
  _gsCProcedureRedDestroyImage(0, 0, 0, args);
}

void redDestroySampler(Number context, Number gpuHandle, Number sampler) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(sampler),
  };
  _gsCProcedureRedDestroySampler(0, 0, 0, args);
}

void redDestroyTexture(Number context, Number gpuHandle, Number texture) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(texture),
  };
  _gsCProcedureRedDestroyTexture(0, 0, 0, args);
}

void redDestroyGpuCode(Number context, Number gpuHandle, Number gpuCode) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(gpuCode),
  };
  _gsCProcedureRedDestroyGpuCode(0, 0, 0, args);
}

void redDestroyOutputDeclaration(Number context, Number gpuHandle, Number outputDeclaration) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(outputDeclaration),
  };
  _gsCProcedureRedDestroyOutputDeclaration(0, 0, 0, args);
}

void redDestroyStructDeclaration(Number context, Number gpuHandle, Number structDeclaration) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(structDeclaration),
  };
  _gsCProcedureRedDestroyStructDeclaration(0, 0, 0, args);
}

void redDestroyProcedureParameters(Number context, Number gpuHandle, Number procedureParameters) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(procedureParameters),
  };
  _gsCProcedureRedDestroyProcedureParameters(0, 0, 0, args);
}

void redDestroyProcedureCache(Number context, Number gpuHandle, Number procedureCache) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(procedureCache),
  };
  _gsCProcedureRedDestroyProcedureCache(0, 0, 0, args);
}

void redDestroyProcedure(Number context, Number gpuHandle, Number procedure) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(procedure),
  };
  _gsCProcedureRedDestroyProcedure(0, 0, 0, args);
}

void redDestroyOutput(Number context, Number gpuHandle, Number output) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(output),
  };
  _gsCProcedureRedDestroyOutput(0, 0, 0, args);
}

void redDestroyCpuSignal(Number context, Number gpuHandle, Number cpuSignal) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(cpuSignal),
  };
  _gsCProcedureRedDestroyCpuSignal(0, 0, 0, args);
}

void redDestroyGpuSignal(Number context, Number gpuHandle, Number gpuSignal) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(gpuSignal),
  };
  _gsCProcedureRedDestroyGpuSignal(0, 0, 0, args);
}

void redDestroyGpuToCpuSignal(Number context, Number gpuHandle, Number gpuToCpuSignal) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(gpuToCpuSignal),
  };
  _gsCProcedureRedDestroyGpuToCpuSignal(0, 0, 0, args);
}

void redDestroyCalls(Number context, Number gpuHandle, Number calls, Number callsMemory) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(callsMemory),
  };
  _gsCProcedureRedDestroyCalls(0, 0, 0, args);
}

void redProcedureCacheGetBlob(Number context, Number gpuHandle, Number procedureCache, Number outBlobBytesCount, Number outBlob, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(procedureCache),
    _gsVoidPointerFromNumber(outBlobBytesCount),
    _gsVoidPointerFromNumber(outBlob),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedProcedureCacheGetBlob(0, 0, 0, args);
}

void redProcedureCacheMergeCaches(Number context, Number gpuHandle, Number sourceProcedureCachesCount, Number sourceProcedureCaches, Number targetProcedureCache, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(sourceProcedureCachesCount),
    _gsVoidPointerFromNumber(sourceProcedureCaches),
    _gsVoidPointerFromNumber(targetProcedureCache),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedProcedureCacheMergeCaches(0, 0, 0, args);
}

Number redCpuSignalGetStatus(Number context, Number gpuHandle, Number cpuSignal) /* -> Number status */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(cpuSignal),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCpuSignalGetStatus(0, 0, 0, args));
}

void redCpuSignalWait(Number context, Number gpuHandle, Number cpuSignalsCount, Number cpuSignals, Bool waitAll, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(cpuSignalsCount),
    _gsVoidPointerFromNumber(cpuSignals),
    _gsVoidPointerFromBool(waitAll),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedCpuSignalWait(0, 0, 0, args);
}

void redCpuSignalUnsignal(Number context, Number gpuHandle, Number cpuSignalsCount, Number cpuSignals, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(cpuSignalsCount),
    _gsVoidPointerFromNumber(cpuSignals),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedCpuSignalUnsignal(0, 0, 0, args);
}

Number redGpuToCpuSignalGetStatus(Number context, Number gpuHandle, Number gpuToCpuSignal) /* -> Number status */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(gpuToCpuSignal),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedGpuToCpuSignalGetStatus(0, 0, 0, args));
}

void redGpuToCpuSignalUnsignal(Number context, Number gpuHandle, Number gpuToCpuSignal, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(gpuToCpuSignal),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedGpuToCpuSignalUnsignal(0, 0, 0, args);
}

void redCallsSet(Number context, Number gpuHandle, Number calls, Number callsMemory, Bool callsReusable, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(callsMemory),
    _gsVoidPointerFromBool(callsReusable),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedCallsSet(0, 0, 0, args);
}

void redCallsEnd(Number context, Number gpuHandle, Number calls, Number callsMemory, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(callsMemory),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedCallsEnd(0, 0, 0, args);
}

void redGetCallProceduresAndAddresses(Number context, Number gpuHandle, Number outCallProceduresAndAddresses, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(outCallProceduresAndAddresses),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedGetCallProceduresAndAddresses(0, 0, 0, args);
}

void redCallGpuToCpuSignalSignal(Number callProceduresAndAddresses, Number calls, Number signalGpuToCpuSignal, Number setTo8192) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(signalGpuToCpuSignal),
    _gsVoidPointerFromNumber(setTo8192),
  };
  _gsCProcedureRedCallGpuToCpuSignalSignal(0, 0, 0, args);
}

void redCallCopyArrayToArray(Number callProceduresAndAddresses, Number calls, Number arrayR, Number arrayW, Number rangesCount, Number ranges) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(arrayR),
    _gsVoidPointerFromNumber(arrayW),
    _gsVoidPointerFromNumber(rangesCount),
    _gsVoidPointerFromNumber(ranges),
  };
  _gsCProcedureRedCallCopyArrayToArray(0, 0, 0, args);
}

void redCallCopyImageToImage(Number callProceduresAndAddresses, Number calls, Number imageR, Number setTo1, Number imageW, Number setTo01, Number rangesCount, Number ranges) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(imageR),
    _gsVoidPointerFromNumber(setTo1),
    _gsVoidPointerFromNumber(imageW),
    _gsVoidPointerFromNumber(setTo01),
    _gsVoidPointerFromNumber(rangesCount),
    _gsVoidPointerFromNumber(ranges),
  };
  _gsCProcedureRedCallCopyImageToImage(0, 0, 0, args);
}

void redCallCopyArrayToImage(Number callProceduresAndAddresses, Number calls, Number arrayR, Number imageW, Number setTo1, Number rangesCount, Number ranges) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(arrayR),
    _gsVoidPointerFromNumber(imageW),
    _gsVoidPointerFromNumber(setTo1),
    _gsVoidPointerFromNumber(rangesCount),
    _gsVoidPointerFromNumber(ranges),
  };
  _gsCProcedureRedCallCopyArrayToImage(0, 0, 0, args);
}

void redCallCopyImageToArray(Number callProceduresAndAddresses, Number calls, Number imageR, Number setTo1, Number arrayW, Number rangesCount, Number ranges) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(imageR),
    _gsVoidPointerFromNumber(setTo1),
    _gsVoidPointerFromNumber(arrayW),
    _gsVoidPointerFromNumber(rangesCount),
    _gsVoidPointerFromNumber(ranges),
  };
  _gsCProcedureRedCallCopyImageToArray(0, 0, 0, args);
}

void redCallProcedure(Number callProceduresAndAddresses, Number calls, Number vertexCount, Number instanceCount, Number vertexFirst, Number instanceFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(vertexCount),
    _gsVoidPointerFromNumber(instanceCount),
    _gsVoidPointerFromNumber(vertexFirst),
    _gsVoidPointerFromNumber(instanceFirst),
  };
  _gsCProcedureRedCallProcedure(0, 0, 0, args);
}

void redCallProcedureIndexed(Number callProceduresAndAddresses, Number calls, Number indexCount, Number instanceCount, Number indexFirst, Number vertexBase, Number instanceFirst) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(indexCount),
    _gsVoidPointerFromNumber(instanceCount),
    _gsVoidPointerFromNumber(indexFirst),
    _gsVoidPointerFromNumber(vertexBase),
    _gsVoidPointerFromNumber(instanceFirst),
  };
  _gsCProcedureRedCallProcedureIndexed(0, 0, 0, args);
}

void redCallProcedureCompute(Number callProceduresAndAddresses, Number calls, Number workgroupsCountX, Number workgroupsCountY, Number workgroupsCountZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(workgroupsCountX),
    _gsVoidPointerFromNumber(workgroupsCountY),
    _gsVoidPointerFromNumber(workgroupsCountZ),
  };
  _gsCProcedureRedCallProcedureCompute(0, 0, 0, args);
}

void redCallSetProcedure(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedure) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(procedureType),
    _gsVoidPointerFromNumber(procedure),
  };
  _gsCProcedureRedCallSetProcedure(0, 0, 0, args);
}

void redCallSetProcedureIndices(Number callProceduresAndAddresses, Number calls, Number array, Number setTo0, Number setTo1) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(array),
    _gsVoidPointerFromNumber(setTo0),
    _gsVoidPointerFromNumber(setTo1),
  };
  _gsCProcedureRedCallSetProcedureIndices(0, 0, 0, args);
}

void redCallSetProcedureParametersVariables(Number callProceduresAndAddresses, Number calls, Number procedureParameters, Number visibleToStages, Number variablesBytesFirst, Number dataBytesCount, Number data) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(procedureParameters),
    _gsVoidPointerFromNumber(visibleToStages),
    _gsVoidPointerFromNumber(variablesBytesFirst),
    _gsVoidPointerFromNumber(dataBytesCount),
    _gsVoidPointerFromNumber(data),
  };
  _gsCProcedureRedCallSetProcedureParametersVariables(0, 0, 0, args);
}

void redCallSetProcedureParametersStructs(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedureParameters, Number procedureParametersDeclarationStructsDeclarationsFirst, Number structsCount, Number structs, Number setTo0, Number setTo00) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(procedureType),
    _gsVoidPointerFromNumber(procedureParameters),
    _gsVoidPointerFromNumber(procedureParametersDeclarationStructsDeclarationsFirst),
    _gsVoidPointerFromNumber(structsCount),
    _gsVoidPointerFromNumber(structs),
    _gsVoidPointerFromNumber(setTo0),
    _gsVoidPointerFromNumber(setTo00),
  };
  _gsCProcedureRedCallSetProcedureParametersStructs(0, 0, 0, args);
}

void redCallSetProcedureParametersHandles(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedureParameters, Number procedureParametersDeclarationStructsDeclarationsCount, Number handlesCount, Number handles) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(procedureType),
    _gsVoidPointerFromNumber(procedureParameters),
    _gsVoidPointerFromNumber(procedureParametersDeclarationStructsDeclarationsCount),
    _gsVoidPointerFromNumber(handlesCount),
    _gsVoidPointerFromNumber(handles),
  };
  _gsCProcedureRedCallSetProcedureParametersHandles(0, 0, 0, args);
}

void redCallSetDynamicDepthBias(Number callProceduresAndAddresses, Number calls, Number constantFactor, Number clamp, Number slopeFactor) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(constantFactor),
    _gsVoidPointerFromNumber(clamp),
    _gsVoidPointerFromNumber(slopeFactor),
  };
  _gsCProcedureRedCallSetDynamicDepthBias(0, 0, 0, args);
}

void redCallSetDynamicDepthBounds(Number callProceduresAndAddresses, Number calls, Number min, Number max) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(min),
    _gsVoidPointerFromNumber(max),
  };
  _gsCProcedureRedCallSetDynamicDepthBounds(0, 0, 0, args);
}

void redCallSetDynamicStencilCompareMask(Number callProceduresAndAddresses, Number calls, Number face, Number compareMask) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(face),
    _gsVoidPointerFromNumber(compareMask),
  };
  _gsCProcedureRedCallSetDynamicStencilCompareMask(0, 0, 0, args);
}

void redCallSetDynamicStencilWriteMask(Number callProceduresAndAddresses, Number calls, Number face, Number writeMask) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(face),
    _gsVoidPointerFromNumber(writeMask),
  };
  _gsCProcedureRedCallSetDynamicStencilWriteMask(0, 0, 0, args);
}

void redCallSetDynamicStencilReference(Number callProceduresAndAddresses, Number calls, Number face, Number reference) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(face),
    _gsVoidPointerFromNumber(reference),
  };
  _gsCProcedureRedCallSetDynamicStencilReference(0, 0, 0, args);
}

void redCallSetDynamicBlendConstants(Number callProceduresAndAddresses, Number calls, Number blendConstants) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(blendConstants),
  };
  _gsCProcedureRedCallSetDynamicBlendConstants(0, 0, 0, args);
}

void redCallSetDynamicViewport(Number callProceduresAndAddresses, Number calls, Number x, Number y, Number width, Number height, Number depthMin, Number depthMax) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
    _gsVoidPointerFromNumber(depthMin),
    _gsVoidPointerFromNumber(depthMax),
  };
  _gsCProcedureRedCallSetDynamicViewport(0, 0, 0, args);
}

void redCallSetDynamicScissor(Number callProceduresAndAddresses, Number calls, Number x, Number y, Number width, Number height) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(width),
    _gsVoidPointerFromNumber(height),
  };
  _gsCProcedureRedCallSetDynamicScissor(0, 0, 0, args);
}

void redCallSetStructsMemory(Number callProceduresAndAddresses, Number calls, Number structsMemory, Number structsMemorySamplers) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(structsMemory),
    _gsVoidPointerFromNumber(structsMemorySamplers),
  };
  _gsCProcedureRedCallSetStructsMemory(0, 0, 0, args);
}

void redCallSetProcedureParameters(Number callProceduresAndAddresses, Number calls, Number procedureType, Number procedureParameters) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(procedureType),
    _gsVoidPointerFromNumber(procedureParameters),
  };
  _gsCProcedureRedCallSetProcedureParameters(0, 0, 0, args);
}

void redCallSetProcedureOutput(Number callProceduresAndAddresses, Number calls, Number outputDeclaration, Number output, Number inlineOutput, Number outputWidth, Number outputHeight, Bool outputDepthStencilEnable, Number outputColorsCount, Number depthClearValue, Number stencilClearValue, Number colorsClearValuesFloat, Number colorsClearValuesSint, Number colorsClearValuesUint) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(outputDeclaration),
    _gsVoidPointerFromNumber(output),
    _gsVoidPointerFromNumber(inlineOutput),
    _gsVoidPointerFromNumber(outputWidth),
    _gsVoidPointerFromNumber(outputHeight),
    _gsVoidPointerFromBool(outputDepthStencilEnable),
    _gsVoidPointerFromNumber(outputColorsCount),
    _gsVoidPointerFromNumber(depthClearValue),
    _gsVoidPointerFromNumber(stencilClearValue),
    _gsVoidPointerFromNumber(colorsClearValuesFloat),
    _gsVoidPointerFromNumber(colorsClearValuesSint),
    _gsVoidPointerFromNumber(colorsClearValuesUint),
  };
  _gsCProcedureRedCallSetProcedureOutput(0, 0, 0, args);
}

void redCallEndProcedureOutput(Number callProceduresAndAddresses, Number calls) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
  };
  _gsCProcedureRedCallEndProcedureOutput(0, 0, 0, args);
}

void redCallUsageAliasOrderBarrier(Number callProceduresAndAddresses, Number calls, Number context, Number arrayUsagesCount, Number arrayUsages, Number imageUsagesCount, Number imageUsages, Number aliasesCount, Number aliases, Number ordersCount, Number orders, Bool dependencyByRegion) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(arrayUsagesCount),
    _gsVoidPointerFromNumber(arrayUsages),
    _gsVoidPointerFromNumber(imageUsagesCount),
    _gsVoidPointerFromNumber(imageUsages),
    _gsVoidPointerFromNumber(aliasesCount),
    _gsVoidPointerFromNumber(aliases),
    _gsVoidPointerFromNumber(ordersCount),
    _gsVoidPointerFromNumber(orders),
    _gsVoidPointerFromBool(dependencyByRegion),
  };
  _gsCProcedureRedCallUsageAliasOrderBarrier(0, 0, 0, args);
}

void redCallMark(Number callProceduresAndAddresses, Number calls, String mark) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    (void *)mark.c_str(),
  };
  _gsCProcedureRedCallMark(0, 0, 0, args);
}

void redCallMarkSet(Number callProceduresAndAddresses, Number calls, String mark) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
    (void *)mark.c_str(),
  };
  _gsCProcedureRedCallMarkSet(0, 0, 0, args);
}

void redCallMarkEnd(Number callProceduresAndAddresses, Number calls) {
  void * args[] = {
    _gsVoidPointerFromNumber(callProceduresAndAddresses),
    _gsVoidPointerFromNumber(calls),
  };
  _gsCProcedureRedCallMarkEnd(0, 0, 0, args);
}

void redQueueSubmit(Number context, Number gpuHandle, Number queue, Number timelinesCount, Number timelines, Number signalCpuSignal, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(queue),
    _gsVoidPointerFromNumber(timelinesCount),
    _gsVoidPointerFromNumber(timelines),
    _gsVoidPointerFromNumber(signalCpuSignal),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedQueueSubmit(0, 0, 0, args);
}

void redMark(String mark) {
  void * args[] = {
    (void *)mark.c_str(),
  };
  _gsCProcedureRedMark(0, 0, 0, args);
}

void redMarkSet(String mark) {
  void * args[] = {
    (void *)mark.c_str(),
  };
  _gsCProcedureRedMarkSet(0, 0, 0, args);
}

void redMarkEnd() {
  _gsCProcedureRedMarkEnd(0, 0, 0, 0);
}

Number redCreateProcedureComputingLanguage(Number context, Number gpuHandle, String handleName, Number procedureCache, Number procedureParameters, String gpuCodeMainProcedureName, Number gpuCode, Number stateExtension, Number outStatuses) /* -> Number procedureHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(procedureCache),
    _gsVoidPointerFromNumber(procedureParameters),
    (void *)gpuCodeMainProcedureName.c_str(),
    _gsVoidPointerFromNumber(gpuCode),
    _gsVoidPointerFromNumber(stateExtension),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateProcedureComputingLanguage(0, 0, 0, args));
}

Number redCreateArrayTimestamp(Number context, Number gpuHandle, String handleName, Number count, Number outStatuses) /* -> Number arrayTimestampHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    (void *)handleName.c_str(),
    _gsVoidPointerFromNumber(count),
    _gsVoidPointerFromNumber(outStatuses),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRedCreateArrayTimestamp(0, 0, 0, args));
}

void redDestroyArrayTimestamp(Number context, Number gpuHandle, Number arrayTimestamp) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(arrayTimestamp),
  };
  _gsCProcedureRedDestroyArrayTimestamp(0, 0, 0, args);
}

void redCallArrayTimestampWrite(Number calls, Number context, Number arrayTimestamp, Number index) {
  void * args[] = {
    _gsVoidPointerFromNumber(calls),
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(arrayTimestamp),
    _gsVoidPointerFromNumber(index),
  };
  _gsCProcedureRedCallArrayTimestampWrite(0, 0, 0, args);
}

void redArrayTimestampRead(Number context, Number gpuHandle, Number arrayTimestamp, Number rangeFirst, Number rangeCount, Number out64BitTicksCounts, Number outStatuses) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(arrayTimestamp),
    _gsVoidPointerFromNumber(rangeFirst),
    _gsVoidPointerFromNumber(rangeCount),
    _gsVoidPointerFromNumber(out64BitTicksCounts),
    _gsVoidPointerFromNumber(outStatuses),
  };
  _gsCProcedureRedArrayTimestampRead(0, 0, 0, args);
}

Number getRrtStructsCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetRrtStructsCount(0, 0, 0, 0));
}

String getRrtStructName(Number index) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetRrtStructName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number getRrtStructMembersCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetRrtStructMembersCount(0, 0, 0, 0));
}

String getRrtStructMemberName(Number index) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetRrtStructMemberName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number rrtStructSizeof(String structName) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)structName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtStructSizeof(0, 0, 0, args));
}

Number rrtStructMemberSizeof(String structName, String structMemberName) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtStructMemberSizeof(0, 0, 0, args));
}

Number rrtStructMemberOffsetof(String structName, String structMemberName) /* -> Number bytesFirst */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtStructMemberOffsetof(0, 0, 0, args));
}

Number rrtStructMemberTypeof(String structName, String structMemberName) /* -> Number structMemberType */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtStructMemberTypeof(0, 0, 0, args));
}

Number rrtCreateContext(Number apiVersion, Number api, Number outContext) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(apiVersion),
    _gsVoidPointerFromNumber(api),
    _gsVoidPointerFromNumber(outContext),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtCreateContext(0, 0, 0, args));
}

Number rrtDestroyContext(Number context) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtDestroyContext(0, 0, 0, args));
}

Number rrtSetLogLevel(Number logLevel) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(logLevel),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtSetLogLevel(0, 0, 0, args));
}

Number rrtSetLogFile(String filename) /* -> Number rrerror */ {
  void * args[] = {
    (void *)filename.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtSetLogFile(0, 0, 0, args));
}

Number rrtCmdBuildGeometry(Number context, Number buildOperation, Number buildInput, Number buildOptions, Number temporaryBuffer, Number geometryBuffer, Number commandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(buildOperation),
    _gsVoidPointerFromNumber(buildInput),
    _gsVoidPointerFromNumber(buildOptions),
    _gsVoidPointerFromNumber(temporaryBuffer),
    _gsVoidPointerFromNumber(geometryBuffer),
    _gsVoidPointerFromNumber(commandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtCmdBuildGeometry(0, 0, 0, args));
}

Number rrtGetGeometryBuildMemoryRequirements(Number context, Number buildInput, Number buildOptions, Number outMemoryRequirements) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(buildInput),
    _gsVoidPointerFromNumber(buildOptions),
    _gsVoidPointerFromNumber(outMemoryRequirements),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtGetGeometryBuildMemoryRequirements(0, 0, 0, args));
}

Number rrtCmdBuildScene(Number context, Number buildInput, Number buildOptions, Number temporaryBuffer, Number sceneBuffer, Number commandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(buildInput),
    _gsVoidPointerFromNumber(buildOptions),
    _gsVoidPointerFromNumber(temporaryBuffer),
    _gsVoidPointerFromNumber(sceneBuffer),
    _gsVoidPointerFromNumber(commandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtCmdBuildScene(0, 0, 0, args));
}

Number rrtGetSceneBuildMemoryRequirements(Number context, Number buildInput, Number buildOptions, Number outMemoryRequirements) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(buildInput),
    _gsVoidPointerFromNumber(buildOptions),
    _gsVoidPointerFromNumber(outMemoryRequirements),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtGetSceneBuildMemoryRequirements(0, 0, 0, args));
}

Number rrtCmdIntersect(Number context, Number sceneBuffer, Number query, Number rays, Number rayCount, Number indirectRayCount, Number queryOutput, Number hits, Number scratch, Number commandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(sceneBuffer),
    _gsVoidPointerFromNumber(query),
    _gsVoidPointerFromNumber(rays),
    _gsVoidPointerFromNumber(rayCount),
    _gsVoidPointerFromNumber(indirectRayCount),
    _gsVoidPointerFromNumber(queryOutput),
    _gsVoidPointerFromNumber(hits),
    _gsVoidPointerFromNumber(scratch),
    _gsVoidPointerFromNumber(commandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtCmdIntersect(0, 0, 0, args));
}

Number rrtGetTraceMemoryRequirements(Number context, Number rayCount, Number outScratchSize) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(rayCount),
    _gsVoidPointerFromNumber(outScratchSize),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtGetTraceMemoryRequirements(0, 0, 0, args));
}

Number rrtAllocateCommandStream(Number context, Number outCommandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(outCommandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtAllocateCommandStream(0, 0, 0, args));
}

Number rrtReleaseCommandStream(Number context, Number commandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(commandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtReleaseCommandStream(0, 0, 0, args));
}

Number rrtSumbitCommandStream(Number context, Number commandStream, Number waitEvent, Number outEvent) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(commandStream),
    _gsVoidPointerFromNumber(waitEvent),
    _gsVoidPointerFromNumber(outEvent),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtSumbitCommandStream(0, 0, 0, args));
}

Number rrtReleaseEvent(Number context, Number event) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(event),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtReleaseEvent(0, 0, 0, args));
}

Number rrtWaitEvent(Number context, Number event) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(event),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtWaitEvent(0, 0, 0, args));
}

Number rrtReleaseDevicePtr(Number context, Number devicePointer) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(devicePointer),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtReleaseDevicePtr(0, 0, 0, args));
}

Number rrtReleaseExternalCommandStream(Number context, Number commandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(commandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtReleaseExternalCommandStream(0, 0, 0, args));
}

Number rrtGetDevicePtrFromVkBuffer(Number context, Number resource, Number offset, Number outDevicePointer) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(resource),
    _gsVoidPointerFromNumber(offset),
    _gsVoidPointerFromNumber(outDevicePointer),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtGetDevicePtrFromVkBuffer(0, 0, 0, args));
}

Number rrtCreateContextVk(Number apiVersion, Number device, Number physicalDevice, Number commandQueue, Number queueFamilyIndex, Number outContext) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(apiVersion),
    _gsVoidPointerFromNumber(device),
    _gsVoidPointerFromNumber(physicalDevice),
    _gsVoidPointerFromNumber(commandQueue),
    _gsVoidPointerFromNumber(queueFamilyIndex),
    _gsVoidPointerFromNumber(outContext),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtCreateContextVk(0, 0, 0, args));
}

Number rrtGetCommandStreamFromVkCommandBuffer(Number context, Number commandBuffer, Number outCommandStream) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(commandBuffer),
    _gsVoidPointerFromNumber(outCommandStream),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtGetCommandStreamFromVkCommandBuffer(0, 0, 0, args));
}

Number rrtAllocateDeviceBuffer(Number context, Number size, Number outDevicePointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(size),
    _gsVoidPointerFromNumber(outDevicePointer),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtAllocateDeviceBuffer(0, 0, 0, args));
}

Number rrtMapDevicePtr(Number context, Number devicePointer, Number outMappingPointer) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(devicePointer),
    _gsVoidPointerFromNumber(outMappingPointer),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtMapDevicePtr(0, 0, 0, args));
}

Number rrtUnmapDevicePtr(Number context, Number devicePointer, Number outMappingPointer) /* -> Number rrerror */ {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(devicePointer),
    _gsVoidPointerFromNumber(outMappingPointer),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureRrtUnmapDevicePtr(0, 0, 0, args));
}

void onRerunCallRedCpuSignalWait(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedCpuSignalWait(0, 0, 0, args);
}

void onRerunCallRedMemoryFree(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedMemoryFree(0, 0, 0, args);
}

void onRerunCallRedStructsMemoryFree(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedStructsMemoryFree(0, 0, 0, args);
}

void onRerunCallRedDestroyContext(Number context) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
  };
  _gsCProcedureOnRerunCallRedDestroyContext(0, 0, 0, args);
}

void onRerunCallRedDestroyArray(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyArray(0, 0, 0, args);
}

void onRerunCallRedDestroyImage(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyImage(0, 0, 0, args);
}

void onRerunCallRedDestroySampler(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroySampler(0, 0, 0, args);
}

void onRerunCallRedDestroyTexture(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyTexture(0, 0, 0, args);
}

void onRerunCallRedDestroyGpuCode(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyGpuCode(0, 0, 0, args);
}

void onRerunCallRedDestroyOutputDeclaration(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyOutputDeclaration(0, 0, 0, args);
}

void onRerunCallRedDestroyStructDeclaration(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyStructDeclaration(0, 0, 0, args);
}

void onRerunCallRedDestroyProcedureParameters(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyProcedureParameters(0, 0, 0, args);
}

void onRerunCallRedDestroyProcedureCache(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyProcedureCache(0, 0, 0, args);
}

void onRerunCallRedDestroyProcedure(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyProcedure(0, 0, 0, args);
}

void onRerunCallRedDestroyOutput(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyOutput(0, 0, 0, args);
}

void onRerunCallRedDestroyCpuSignal(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyCpuSignal(0, 0, 0, args);
}

void onRerunCallRedDestroyGpuSignal(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyGpuSignal(0, 0, 0, args);
}

void onRerunCallRedDestroyGpuToCpuSignal(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyGpuToCpuSignal(0, 0, 0, args);
}

void onRerunCallRedDestroyCalls(Number context, Number gpuHandle, Number callsHandle, Number callsMemoryHandle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(callsHandle),
    _gsVoidPointerFromNumber(callsMemoryHandle),
  };
  _gsCProcedureOnRerunCallRedDestroyCalls(0, 0, 0, args);
}

void onRerunCallRedDestroyArrayTimestamp(Number context, Number gpuHandle, Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(context),
    _gsVoidPointerFromNumber(gpuHandle),
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureOnRerunCallRedDestroyArrayTimestamp(0, 0, 0, args);
}

void onRerunCallRrtWaitEvent(Number rrcontext, Number rrevent) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
    _gsVoidPointerFromNumber(rrevent),
  };
  _gsCProcedureOnRerunCallRrtWaitEvent(0, 0, 0, args);
}

void onRerunCallRrtDestroyContext(Number rrcontext) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
  };
  _gsCProcedureOnRerunCallRrtDestroyContext(0, 0, 0, args);
}

void onRerunCallRrtReleaseCommandStream(Number rrcontext, Number rrcommandStream) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
    _gsVoidPointerFromNumber(rrcommandStream),
  };
  _gsCProcedureOnRerunCallRrtReleaseCommandStream(0, 0, 0, args);
}

void onRerunCallRrtReleaseEvent(Number rrcontext, Number rrevent) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
    _gsVoidPointerFromNumber(rrevent),
  };
  _gsCProcedureOnRerunCallRrtReleaseEvent(0, 0, 0, args);
}

void onRerunCallRrtReleaseDevicePtr(Number rrcontext, Number rrdevicePointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
    _gsVoidPointerFromNumber(rrdevicePointer),
  };
  _gsCProcedureOnRerunCallRrtReleaseDevicePtr(0, 0, 0, args);
}

void onRerunCallRrtReleaseExternalCommandStream(Number rrcontext, Number rrcommandStream) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
    _gsVoidPointerFromNumber(rrcommandStream),
  };
  _gsCProcedureOnRerunCallRrtReleaseExternalCommandStream(0, 0, 0, args);
}

void onRerunCallRrtUnmapDevicePtr(Number rrcontext, Number rrdevicePointer, Number outMappingPointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(rrcontext),
    _gsVoidPointerFromNumber(rrdevicePointer),
    _gsVoidPointerFromNumber(outMappingPointer),
  };
  _gsCProcedureOnRerunCallRrtUnmapDevicePtr(0, 0, 0, args);
}

Number getXatlasStructsCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetXatlasStructsCount(0, 0, 0, 0));
}

String getXatlasStructName(Number index) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetXatlasStructName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number getXatlasStructMembersCount() /* -> Number count */ {
  return _gsNumberFromVoidPointer(_gsCProcedureGetXatlasStructMembersCount(0, 0, 0, 0));
}

String getXatlasStructMemberName(Number index) /* -> String name */ {
  void * args[] = {
    _gsVoidPointerFromNumber(index),
  };
  const char * output = (const char *)_gsCProcedureGetXatlasStructMemberName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number xatlasStructSizeof(String structName) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)structName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasStructSizeof(0, 0, 0, args));
}

Number xatlasStructMemberSizeof(String structName, String structMemberName) /* -> Number bytesCount */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasStructMemberSizeof(0, 0, 0, args));
}

Number xatlasStructMemberOffsetof(String structName, String structMemberName) /* -> Number bytesFirst */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasStructMemberOffsetof(0, 0, 0, args));
}

Number xatlasStructMemberTypeof(String structName, String structMemberName) /* -> Number structMemberType */ {
  void * args[] = {
    (void *)structName.c_str(),
    (void *)structMemberName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasStructMemberTypeof(0, 0, 0, args));
}

void xatlasMeshDeclInit(Number pointerToXatlasMeshDecl) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerToXatlasMeshDecl),
  };
  _gsCProcedureXatlasMeshDeclInit(0, 0, 0, args);
}

void xatlasUvMeshDeclInit(Number pointerToXatlasUvMeshDecl) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerToXatlasUvMeshDecl),
  };
  _gsCProcedureXatlasUvMeshDeclInit(0, 0, 0, args);
}

void xatlasChartOptionsInit(Number pointerToXatlasChartOptions) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerToXatlasChartOptions),
  };
  _gsCProcedureXatlasChartOptionsInit(0, 0, 0, args);
}

void xatlasPackOptionsInit(Number pointerToXatlasPackOptions) {
  void * args[] = {
    _gsVoidPointerFromNumber(pointerToXatlasPackOptions),
  };
  _gsCProcedureXatlasPackOptionsInit(0, 0, 0, args);
}

Number xatlasCreate() /* -> Number xatlas */ {
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasCreate(0, 0, 0, 0));
}

void xatlasDestroy(Number xatlas) {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
  };
  _gsCProcedureXatlasDestroy(0, 0, 0, args);
}

Number xatlasAddMesh(Number xatlas, Number pointerToXatlasMeshDecl, Number meshCountHint) /* -> Number status */ {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
    _gsVoidPointerFromNumber(pointerToXatlasMeshDecl),
    _gsVoidPointerFromNumber(meshCountHint),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasAddMesh(0, 0, 0, args));
}

void xatlasAddMeshJoin(Number xatlas) {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
  };
  _gsCProcedureXatlasAddMeshJoin(0, 0, 0, args);
}

Number xatlasAddUvMesh(Number xatlas, Number pointerToXatlasUvMeshDecl) /* -> Number status */ {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
    _gsVoidPointerFromNumber(pointerToXatlasUvMeshDecl),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureXatlasAddUvMesh(0, 0, 0, args));
}

void xatlasComputeCharts(Number xatlas, Number pointerToXatlasChartOptions) {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
    _gsVoidPointerFromNumber(pointerToXatlasChartOptions),
  };
  _gsCProcedureXatlasComputeCharts(0, 0, 0, args);
}

void xatlasPackCharts(Number xatlas, Number pointerToXatlasPackOptions) {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
    _gsVoidPointerFromNumber(pointerToXatlasPackOptions),
  };
  _gsCProcedureXatlasPackCharts(0, 0, 0, args);
}

void xatlasGenerate(Number xatlas, Number pointerToXatlasChartOptions, Number pointerToXatlasPackOptions) {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
    _gsVoidPointerFromNumber(pointerToXatlasChartOptions),
    _gsVoidPointerFromNumber(pointerToXatlasPackOptions),
  };
  _gsCProcedureXatlasGenerate(0, 0, 0, args);
}

void onRerunCallXatlasDestroy(Number xatlas) {
  void * args[] = {
    _gsVoidPointerFromNumber(xatlas),
  };
  _gsCProcedureOnRerunCallXatlasDestroy(0, 0, 0, args);
}

Number fbxNew(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxNew(0, 0, 0, args));
}

Number fbxNewFromFile(String label, String filepath) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
    (void *)filepath.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxNewFromFile(0, 0, 0, args));
}

void fbxDelete(String label) {
  void * args[] = {
    (void *)label.c_str(),
  };
  _gsCProcedureFbxDelete(0, 0, 0, args);
}

void fbxDeleteAll() {
  _gsCProcedureFbxDeleteAll(0, 0, 0, 0);
}

Number fbxGetHandle(String label) /* -> Number handle */ {
  void * args[] = {
    (void *)label.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxGetHandle(0, 0, 0, args));
}

void fbxCopyToFbx(Number handleCopyFrom, Number handleCopyTo) {
  void * args[] = {
    _gsVoidPointerFromNumber(handleCopyFrom),
    _gsVoidPointerFromNumber(handleCopyTo),
  };
  _gsCProcedureFbxCopyToFbx(0, 0, 0, args);
}

void fbxClear(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureFbxClear(0, 0, 0, args);
}

void fbxEarlyUpdate(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureFbxEarlyUpdate(0, 0, 0, args);
}

void fbxLateUpdate(Number handle) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  _gsCProcedureFbxLateUpdate(0, 0, 0, args);
}

Number fbxGetMeshesCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxGetMeshesCount(0, 0, 0, args));
}

Number fbxGetMesh(Number handle, Number meshIndex) /* -> Number meshHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(meshIndex),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxGetMesh(0, 0, 0, args));
}

String fbxGetMeshName(Number handle, Number meshIndex) /* -> String meshName */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(meshIndex),
  };
  const char * output = (const char *)_gsCProcedureFbxGetMeshName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number fbxGetRootBonesCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxGetRootBonesCount(0, 0, 0, args));
}

Number fbxGetRootBone(Number handle, Number rootBoneIndex) /* -> Number boneHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(rootBoneIndex),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxGetRootBone(0, 0, 0, args));
}

String fbxBoneGetName(Number handle) /* -> String boneName */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  const char * output = (const char *)_gsCProcedureFbxBoneGetName(0, 0, 0, args);
  String out = output;
  free((void *)output);
  return out;
}

Number fbxBoneGetChildBonesCount(Number handle) /* -> Number count */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxBoneGetChildBonesCount(0, 0, 0, args));
}

Number fbxBoneGetChildBone(Number handle, Number childBoneIndex) /* -> Number boneHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(childBoneIndex),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxBoneGetChildBone(0, 0, 0, args));
}

Number fbxBoneGetChildBoneByNameRecursively(Number handle, String boneName) /* -> Number boneHandle */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    (void *)boneName.c_str(),
  };
  return _gsNumberFromVoidPointer(_gsCProcedureFbxBoneGetChildBoneByNameRecursively(0, 0, 0, args));
}

NumberArray fbxBoneGetVector(Number handle) /* -> Number position [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  Number * output = (Number *)_gsCProcedureFbxBoneGetVector(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray fbxBoneGetVersor(Number handle) /* -> Number quaternion [4] {x, y, z, w} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  Number * output = (Number *)_gsCProcedureFbxBoneGetVersor(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 4); }
  free(output);
  return out;
}

NumberArray fbxBoneGetScale(Number handle) /* -> Number scale [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  Number * output = (Number *)_gsCProcedureFbxBoneGetScale(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray fbxBoneGetSideVector(Number handle) /* -> Number sideVector [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  Number * output = (Number *)_gsCProcedureFbxBoneGetSideVector(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray fbxBoneGetUpVector(Number handle) /* -> Number upVector [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  Number * output = (Number *)_gsCProcedureFbxBoneGetUpVector(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

NumberArray fbxBoneGetLookAtVector(Number handle) /* -> Number lookAtVector [3] {x, y, z} */ {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
  };
  Number * output = (Number *)_gsCProcedureFbxBoneGetLookAtVector(0, 0, 0, args);
  NumberArray out;
  if (output != 0) { out = NumberArray(output, output + 3); }
  free(output);
  return out;
}

void fbxBoneGetTransformMatrix(Number handle, Number outPointer) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(outPointer),
  };
  _gsCProcedureFbxBoneGetTransformMatrix(0, 0, 0, args);
}

void fbxBoneSetVector(Number handle, Number x, Number y, Number z) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureFbxBoneSetVector(0, 0, 0, args);
}

void fbxBoneSetVersor(Number handle, Number x, Number y, Number z, Number w) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(w),
  };
  _gsCProcedureFbxBoneSetVersor(0, 0, 0, args);
}

void fbxBoneSetScale(Number handle, Number x, Number y, Number z) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
  };
  _gsCProcedureFbxBoneSetScale(0, 0, 0, args);
}

void fbxBoneRotate(Number handle, Number rotationX, Number rotationY, Number rotationZ, Number rotationDeg) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(rotationX),
    _gsVoidPointerFromNumber(rotationY),
    _gsVoidPointerFromNumber(rotationZ),
    _gsVoidPointerFromNumber(rotationDeg),
  };
  _gsCProcedureFbxBoneRotate(0, 0, 0, args);
}

void fbxBoneLookAt(Number handle, Number x, Number y, Number z, Number upX, Number upY, Number upZ) {
  void * args[] = {
    _gsVoidPointerFromNumber(handle),
    _gsVoidPointerFromNumber(x),
    _gsVoidPointerFromNumber(y),
    _gsVoidPointerFromNumber(z),
    _gsVoidPointerFromNumber(upX),
    _gsVoidPointerFromNumber(upY),
    _gsVoidPointerFromNumber(upZ),
  };
  _gsCProcedureFbxBoneLookAt(0, 0, 0, args);
}
