/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SSXPCConnection, NSString;

@interface SSVMediaSocialShareExtension : NSObject {

	SSXPCConnection* _connection;

}

@property (nonatomic,copy,readonly) NSString * extensionIdentifier; 
-(id)init;
-(NSString *)extensionIdentifier;
-(void)getVisibilityWithCompletionBlock:(/*^block*/id)arg1 ;
@end
