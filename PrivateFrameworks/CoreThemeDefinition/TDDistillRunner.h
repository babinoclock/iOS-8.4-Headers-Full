/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:18 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class TDDistiller, NSURL, TDLogger, NSString;

@interface TDDistillRunner : NSObject {

	int _capabilities;
	TDDistiller* _distiller;
	NSURL* _carScratchURL;
	NSURL* _outputURL;
	TDLogger* _logger;
	NSString* _assetStoreVersionString;
	int _assetStoreVersionNumber;

}

@property (nonatomic,copy) NSURL * outputURL;                     //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) TDLogger * logger;                   //@synthesize logger=_logger - In the implementation block
@property (copy) NSString * assetStoreVersionString;              //@synthesize assetStoreVersionString=_assetStoreVersionString - In the implementation block
@property (assign) int assetStoreVersionNumber;                   //@synthesize assetStoreVersionNumber=_assetStoreVersionNumber - In the implementation block
-(NSURL *)outputURL;
-(void)dealloc;
-(id)init;
-(void)setDocumentCapabilities:(int)arg1 ;
-(id)carScratchURL;
-(char)_isDistillUnnecessaryForDocument:(id)arg1 ;
-(int)assetStoreVersionNumber;
-(void)setAssetStoreVersionNumber:(int)arg1 ;
-(NSString *)assetStoreVersionString;
-(void)setAssetStoreVersionString:(NSString *)arg1 ;
-(void)_moveScratchToOutputPath;
-(void)_removeScratchPath;
-(char)runDistillWithDocumentURL:(id)arg1 outputURL:(id)arg2 attemptIncremental:(char)arg3 forceDistill:(char)arg4 ;
-(void)setOutputURL:(NSURL *)arg1 ;
-(TDLogger *)logger;
-(void)setLogger:(TDLogger *)arg1 ;
@end

