/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:55 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@interface SSSoftwareUpdatesRequest : SSRequest {

	SSSoftwareUpdatesContext* _context;

}

@property (readonly) SSSoftwareUpdatesContext * updateQueueContext; 
@property (assign,nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate; 
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(void)dealloc;
-(char)start;
-(void)startWithUpdatesResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithUpdateQueueContext:(id)arg1 ;
-(SSSoftwareUpdatesContext *)updateQueueContext;
@end

