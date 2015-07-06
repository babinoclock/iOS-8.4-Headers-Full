/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/BulletinBoardPlugins/SocialBulletinBoardProvider.bundle/SocialBulletinBoardProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SLUploadCompletionSession, NSString, NSArray;

@interface SLUploadService : NSObject {

	SLUploadCompletionSession* _session;
	NSString* _XPCServiceName;
	NSArray* _notificationNames;
	int _bulletinSubtype;
	NSString* _variantIconResourceName;

}

@property (retain) NSString * XPCServiceName;                          //@synthesize XPCServiceName=_XPCServiceName - In the implementation block
@property (retain) NSArray * notificationNames;                        //@synthesize notificationNames=_notificationNames - In the implementation block
@property (readonly) SLUploadCompletionSession * session; 
@property (readonly) int bulletinSubtype;                              //@synthesize bulletinSubtype=_bulletinSubtype - In the implementation block
@property (readonly) NSString * variantIconResourceName;               //@synthesize variantIconResourceName=_variantIconResourceName - In the implementation block
-(NSString *)XPCServiceName;
-(id)initWithXPCServiceName:(id)arg1 notificationNames:(id)arg2 bulletinSubtype:(int)arg3 variantIconResourceName:(id)arg4 ;
-(void)setXPCServiceName:(NSString *)arg1 ;
-(int)bulletinSubtype;
-(NSString *)variantIconResourceName;
-(SLUploadCompletionSession *)session;
-(void)setNotificationNames:(NSArray *)arg1 ;
-(NSArray *)notificationNames;
@end

