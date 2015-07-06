/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:04 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/NSStreamDelegate.h>

@protocol HSControlConnectionDelegate;
@class NSOutputStream, NSString;

@interface HSControlConnection : NSObject <NSStreamDelegate> {

	unsigned _key;
	NSOutputStream* _outputStream;
	double _timestamp;
	id<HSControlConnectionDelegate> _delegate;
	unsigned _protocolVersion;

}

@property (assign,nonatomic) id<HSControlConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned protocolVersion;                              //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<HSControlConnectionDelegate>)arg1 ;
-(id<HSControlConnectionDelegate>)delegate;
-(void)close;
-(void)open;
-(unsigned)protocolVersion;
-(void)stream:(id)arg1 handleEvent:(unsigned)arg2 ;
-(void)setProtocolVersion:(unsigned)arg1 ;
-(id)_newDataForControlEventMessage:(SCD_Struct_HS4)arg1 ;
-(id)_newDataForControlExtendedMessage:(SCD_Struct_HS4)arg1 withData:(id)arg2 ;
-(void)_sendTouchEvent:(int)arg1 locations:(const unsigned*)arg2 count:(unsigned)arg3 velocity:(CGSize)arg4 ;
-(id)_newDataForControlTouchEventMessage_v1:(SCD_Struct_HS5*)arg1 ;
-(id)_newDataForControlTouchEventMessage_v1_1:(SCD_Struct_HS6*)arg1 ;
-(id)initWithHost:(id)arg1 port:(unsigned)arg2 key:(unsigned)arg3 ;
-(void)sendEvent:(int)arg1 value:(unsigned)arg2 ;
-(void)sendShowItemDetailWithDictionary:(id)arg1 ;
-(void)sendTouchesBegan:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)sendTouchesEnded:(const unsigned*)arg1 count:(unsigned)arg2 ;
-(void)sendTouchesMoved:(const unsigned*)arg1 count:(unsigned)arg2 velocity:(CGSize)arg3 ;
@end

