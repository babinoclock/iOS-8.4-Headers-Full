/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:27 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray;

@interface DEExtensionManager : NSObject {

	char _extendedLoaded;
	NSObject*<OS_dispatch_queue> _initialLoadQueue;
	NSArray* _extensions;
	/*^block*/id _afterExtendedBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> initialLoadQueue;              //@synthesize initialLoadQueue=_initialLoadQueue - In the implementation block
@property (nonatomic,retain) NSArray * extensions;                                       //@synthesize extensions=_extensions - In the implementation block
@property (nonatomic,copy) id afterExtendedBlock;                                        //@synthesize afterExtendedBlock=_afterExtendedBlock - In the implementation block
@property (assign,nonatomic) char extendedLoaded;                                        //@synthesize extendedLoaded=_extendedLoaded - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)setInitialLoadQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setAfterExtendedBlock:(id)arg1 ;
-(void)setExtendedLoaded:(char)arg1 ;
-(void)setExtensions:(NSArray *)arg1 ;
-(id)extensionsWithFilter:(id)arg1 ;
-(id)afterExtendedBlock;
-(char)extendedLoaded;
-(NSObject*<OS_dispatch_queue>)initialLoadQueue;
-(id)extensionForBundleID:(id)arg1 ;
-(id)extensionForIdentifier:(id)arg1 ;
-(void)loadExtensions;
-(void)loadExtensionsExtendedWithFilter:(id)arg1 ;
-(void)runAfterInitialLoad:(/*^block*/id)arg1 ;
-(void)runAfterExtendedLoad:(/*^block*/id)arg1 ;
-(NSArray *)extensions;
@end

