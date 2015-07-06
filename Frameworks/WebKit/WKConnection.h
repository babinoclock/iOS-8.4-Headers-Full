/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:08 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKConnection : NSObject <WKObject> {

	WeakObjCPtr<id<WKConnectionDelegate> > _delegate;

}

@property (assign) id<WKConnectionDelegate> delegate; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(void)dealloc;
-(void)setDelegate:(id<WKConnectionDelegate>)arg1 ;
-(id<WKConnectionDelegate>)delegate;
-(WebConnection*)_connection;
-(Object*)_apiObject;
-(void)sendMessageWithName:(id)arg1 body:(id)arg2 ;
@end

