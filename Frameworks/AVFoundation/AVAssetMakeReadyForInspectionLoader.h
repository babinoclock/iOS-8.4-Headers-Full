/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {

	AVAssetInspector* _assetInspector;
	OpaqueFigFormatReaderRef _formatReader;
	OpaqueFigSimpleMutexRef _loadingMutex;
	NSMutableArray* _keysAwaitingCompletion;
	int _status;
	long _basicInspectionFailureCode;
	NSURL* _URL;

}
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(void)_serverHasDied;
-(char)isExportable;
-(char)isComposable;
-(OpaqueFigFormatReaderRef)_formatReader;
-(id)figChapterGroupInfo;
-(id)assetInspector;
-(int)_status;
-(void)_setStatus:(int)arg1 figErrorCode:(long)arg2 ;
-(OpaqueFigFormatReaderRef)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1 ;
-(id)_dictionaryOfSpecialGettersForKeyValueStatus;
-(int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id*)arg2 ;
-(char)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1 ;
-(char)_inspectionRequiresAFormatReader;
-(char)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2 ;
-(id)_getAndPruneCompletionsWhileMutexLocked;
-(id)_dictionaryOfSpecialLoadingMethodsForKeys;
-(id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1 ;
-(id)_loadValuesWhileMutexLockedForKeys:(id)arg1 ;
-(OpaqueFigSimpleMutexRef)_loadingMutex;
-(char)_providesAccurateTiming;
-(id)_statusOfValueForKeyThatIsAlwaysLoaded;
-(char)_isStreaming;
-(void)dealloc;
-(SCD_Struct_CM4)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)URL;
-(id)lyrics;
-(char)hasProtectedContent;
-(char)isReadable;
-(int)statusOfValueForKey:(id)arg1 error:(id*)arg2 ;
-(void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(char)isPlayable;
-(void)finalize;
-(void)cancelLoading;
@end

