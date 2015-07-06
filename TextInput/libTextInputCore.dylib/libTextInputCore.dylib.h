#import <libTextInputCore.dylib/TIWordSearchOperationClearDynamicLanguageModelCache.h>
#import <libTextInputCore.dylib/TICompiledCollatorFile.h>
#import <libTextInputCore.dylib/TIInputMode.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerWrapper.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager_zh_ja.h>
#import <libTextInputCore.dylib/TIWordSearchOperationAdaptContext.h>
#import <libTextInputCore.dylib/TICandidateCommitHistory.h>
#import <libTextInputCore.dylib/TIMecabraContext.h>
#import <libTextInputCore.dylib/TITextCheckerExemptionsImpl.h>
#import <libTextInputCore.dylib/TITextCheckerExemptions.h>
#import <libTextInputCore.dylib/TILanguageModelLoaderClientRecord.h>
#import <libTextInputCore.dylib/TILanguageModelLoader.h>
#import <libTextInputCore.dylib/TIRevisionHistoryToken.h>
#import <libTextInputCore.dylib/TITokenizationRevision.h>
#import <libTextInputCore.dylib/TIRevisionHistory.h>
#import <libTextInputCore.dylib/TIWordSearch.h>
#import <libTextInputCore.dylib/TINoncancellableBlockOperation.h>
#import <libTextInputCore.dylib/TIWordSearchOperationSetLanguageModelApplicationContext.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerBase.h>
#import <libTextInputCore.dylib/TIDebugValue.h>
#import <libTextInputCore.dylib/TISweepSource.h>
#import <libTextInputCore.dylib/TITypologyLogArchiverDelegate.h>
#import <libTextInputCore.dylib/TITypologyLog.h>
#import <libTextInputCore.dylib/TIUserDictionaryServer.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerLogger.h>
#import <libTextInputCore.dylib/TILanguageModelOfflineLearningHandle.h>
#import <libTextInputCore.dylib/TILanguageModelOfflineLearningTask.h>
#import <libTextInputCore.dylib/TILanguageModelOfflineLearningTaskMail.h>
#import <libTextInputCore.dylib/TILanguageModelOfflineLearningTaskMessages.h>
#import <libTextInputCore.dylib/TIDictionaryUpdateManager.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerConfig.h>
#import <libTextInputCore.dylib/TILanguageModelMaintainer.h>
#import <libTextInputCore.dylib/TIAutoshiftRegularExpressionLoader.h>
#import <libTextInputCore.dylib/TIPersistentQueue.h>
#import <libTextInputCore.dylib/TITypologyStatistic.h>
#import <libTextInputCore.dylib/TITypologyStatisticBasicCounts.h>
#import <libTextInputCore.dylib/TITypologyStatisticCurrentAutocorrections.h>
#import <libTextInputCore.dylib/TITypologyStatisticRankCandidatesAccepted.h>
#import <libTextInputCore.dylib/TITypologyTimer.h>
#import <libTextInputCore.dylib/TITypologyStatisticTimeElapsed.h>
#import <libTextInputCore.dylib/TITypologyStatisticAutocorrectionListUI.h>
#import <libTextInputCore.dylib/TIWordSearchOperationGetCandidates.h>
#import <libTextInputCore.dylib/TIWordSearchOperation.h>
#import <libTextInputCore.dylib/TIKeyboardAssertionManager.h>
#import <libTextInputCore.dylib/TIWordSearchOperationAcceptCandidate.h>
#import <libTextInputCore.dylib/TIWordSearchOperationCancelLastAcceptedCandidate.h>
#import <libTextInputCore.dylib/TIMecabraWrapper.h>
#import <libTextInputCore.dylib/TIKeyboardInputManagerKeyboardContext.h>
#import <libTextInputCore.dylib/TIKeyboardInputManager.h>
#import <libTextInputCore.dylib/TIWordSearchCandidateResultSet.h>
#import <libTextInputCore.dylib/TILanguageModelOfflineLearningAgent.h>
#import <libTextInputCore.dylib/TICryptographer.h>
#import <libTextInputCore.dylib/TIMecabraIMLogger.h>
#import <libTextInputCore.dylib/TITypologyRecord.h>
#import <libTextInputCore.dylib/TITypologyRecordSync.h>
#import <libTextInputCore.dylib/TITypologyRecordKeyboardInput.h>
#import <libTextInputCore.dylib/TITypologyRecordAutocorrections.h>
#import <libTextInputCore.dylib/TITypologyRecordCandidateResultSet.h>
#import <libTextInputCore.dylib/TITypologyRecordAcceptedCandidate.h>
#import <libTextInputCore.dylib/TITypologyRecordReplacements.h>
#import <libTextInputCore.dylib/TITypologyRecordRefinements.h>
#import <libTextInputCore.dylib/TITypologyRecordHitTest.h>
#import <libTextInputCore.dylib/TITypologyRecordSkipHitTest.h>
#import <libTextInputCore.dylib/TITypologyRecordPhraseBoundaryAdjustment.h>
#import <libTextInputCore.dylib/TITypologyRecordSetOriginalInput.h>
#import <libTextInputCore.dylib/TITypologyRecordTextAccepted.h>
#import <libTextInputCore.dylib/TITypologyRecordCandidateRejected.h>
#import <libTextInputCore.dylib/TITypologyRecordLastAcceptedCandidateCorrected.h>
#import <libTextInputCore.dylib/TIAddressBook.h>
#import <libTextInputCore.dylib/TIKBDLogging.h>
#import <libTextInputCore.dylib/TIAddressBookMecabraCache.h>
#import <libTextInputCore.dylib/TIAddressBookMecabra.h>
#import <libTextInputCore.dylib/TIMobileAssetTimerImpl.h>
#import <libTextInputCore.dylib/TIMobileAssetTimer.h>
