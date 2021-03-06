/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:03 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, CPLStatusDelegate;
@class NSURL, NSMutableDictionary, NSObject, NSDate, NSDictionary;

@interface CPLStatus : NSObject {

	NSURL* _statusFileURL;
	NSMutableDictionary* _status;
	NSObject*<OS_dispatch_queue> _lock;
	id<CPLStatusDelegate> _delegate;

}

@property (assign,nonatomic) NSDate * lastSuccessfulSyncDate; 
@property (assign,nonatomic) char hasChangesToProcess; 
@property (assign,nonatomic) char isExceedingQuota; 
@property (assign,nonatomic) NSDate * exitDeleteTime; 
@property (assign,nonatomic) char iCloudLibraryHasBeenWiped; 
@property (assign,nonatomic) char iCloudLibraryExists; 
@property (nonatomic,readonly) NSDictionary * cloudAssetCountPerType; 
@property (assign,nonatomic,__weak) id<CPLStatusDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDate * cloudAssetCountPerTypeLastCheckDate; 
+(id)statusForSharedLibrary;
-(void)setDelegate:(id<CPLStatusDelegate>)arg1 ;
-(id<CPLStatusDelegate>)delegate;
-(void)_save;
-(void)setHasChangesToProcess:(char)arg1 ;
-(id)initWithClientLibraryBaseURL:(id)arg1 ;
-(void)_loadIfNecessary;
-(void)refetchFromDisk;
-(void)setLastSuccessfulSyncDate:(NSDate *)arg1 ;
-(void)setIsExceedingQuota:(char)arg1 ;
-(void)setExitDeleteTime:(NSDate *)arg1 ;
-(void)setICloudLibraryHasBeenWiped:(char)arg1 ;
-(char)iCloudLibraryExists;
-(void)setICloudLibraryExists:(char)arg1 ;
-(void)setCloudAssetCountPerType:(id)arg1 updateCheckDate:(char)arg2 ;
-(NSDate *)cloudAssetCountPerTypeLastCheckDate;
-(void)_statusDidChange;
-(id)statusDescription;
-(NSDictionary *)cloudAssetCountPerType;
-(NSDate *)lastSuccessfulSyncDate;
-(char)iCloudLibraryHasBeenWiped;
-(char)hasChangesToProcess;
-(char)isExceedingQuota;
-(NSDate *)exitDeleteTime;
@end

