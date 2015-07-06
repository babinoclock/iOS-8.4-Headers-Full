/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:02 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsOperationInfo : CKOperationInfo {

	int _discoverable;
	NSString* _applicationBundleID;

}

@property (assign,nonatomic) int discoverable;                          //@synthesize discoverable=_discoverable - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleID;              //@synthesize applicationBundleID=_applicationBundleID - In the implementation block
-(id)init;
-(NSString *)applicationBundleID;
-(int)discoverable;
-(void)setDiscoverable:(int)arg1 ;
-(void)setApplicationBundleID:(NSString *)arg1 ;
@end
