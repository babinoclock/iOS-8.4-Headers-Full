/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetReaderOutputMetadataAdaptorInternal, AVAssetReaderTrackOutput;

@interface AVAssetReaderOutputMetadataAdaptor : NSObject {

	AVAssetReaderOutputMetadataAdaptorInternal* _internal;

}

@property (nonatomic,readonly) AVAssetReaderTrackOutput * assetReaderTrackOutput; 
+(id)assetReaderOutputMetadataAdaptorWithAssetReaderTrackOutput:(id)arg1 ;
-(id)initWithAssetReaderTrackOutput:(id)arg1 ;
-(AVAssetReaderTrackOutput *)assetReaderTrackOutput;
-(id)nextTimedMetadataGroup;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end

