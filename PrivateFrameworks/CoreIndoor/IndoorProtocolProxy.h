/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:11 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreIndoor/CLIndoorDelegateProtocolInternal.h>
#import <CoreIndoor/CLIndoorDelegateProtocol.h>

@protocol CLIndoorDelegateProtocol;
@class NSError, NSString;

@interface IndoorProtocolProxy : NSObject <CLIndoorDelegateProtocolInternal, CLIndoorDelegateProtocol> {

	id<CLIndoorDelegateProtocol> _delegate;
	NSError* _shutdownReason;

}

@property (assign,nonatomic,__weak) id<CLIndoorDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSError * shutdownReason;                                //@synthesize shutdownReason=_shutdownReason - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<CLIndoorDelegateProtocol>)arg1 ;
-(id<CLIndoorDelegateProtocol>)delegate;
-(void)indoorDidUpdateToLocation:(id)arg1 fromLocation:(id)arg2 ;
-(void)indoorIsUncertainWithLocation:(id)arg1 ;
-(void)indoorGivesUpWithLocation:(id)arg1 ;
-(void)indoorAssetDownloadProgress:(float)arg1 ;
-(void)indoorDidFailWithError:(id)arg1 ;
-(void)indoorDidShutdown:(id)arg1 ;
-(NSError *)shutdownReason;
-(id)initWithDelegate:(id)arg1 ;
@end
