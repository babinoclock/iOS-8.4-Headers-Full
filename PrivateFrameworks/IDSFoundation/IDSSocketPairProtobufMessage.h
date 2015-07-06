/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData, NSString, NSDate;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage {

	unsigned _payloadOffset;
	unsigned _payloadLength;
	unsigned short _isResponse;
	unsigned short _type;
	NSData* _data;
	unsigned _sequenceNumber;
	unsigned short _streamID;
	char _expectsPeerResponse;
	char _wantsAppAck;
	char _compressed;
	NSString* _peerResponseIdentifier;
	NSString* _messageUUID;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) unsigned short isResponse;                             //@synthesize isResponse=_isResponse - In the implementation block
@property (nonatomic,readonly) unsigned short type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                                 //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) unsigned short streamID;                               //@synthesize streamID=_streamID - In the implementation block
@property (nonatomic,readonly) char expectsPeerResponse;                              //@synthesize expectsPeerResponse=_expectsPeerResponse - In the implementation block
@property (nonatomic,readonly) char wantsAppAck;                                      //@synthesize wantsAppAck=_wantsAppAck - In the implementation block
@property (assign,nonatomic) char compressed;                                         //@synthesize compressed=_compressed - In the implementation block
@property (nonatomic,retain,readonly) NSString * peerResponseIdentifier;              //@synthesize peerResponseIdentifier=_peerResponseIdentifier - In the implementation block
@property (nonatomic,retain,readonly) NSString * messageUUID;                         //@synthesize messageUUID=_messageUUID - In the implementation block
@property (assign,nonatomic) NSDate * expiryDate;                                     //@synthesize expiryDate=_expiryDate - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(unsigned short)type;
-(NSData *)data;
-(unsigned short)streamID;
-(unsigned short)isResponse;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(char)wantsAppAck;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
-(char)compressed;
-(void)setCompressed:(char)arg1 ;
-(NSString *)messageUUID;
-(NSString *)peerResponseIdentifier;
-(id)initWithSequenceNumber:(unsigned)arg1 streamID:(unsigned short)arg2 expectsPeerResponse:(char)arg3 wantsAppAck:(char)arg4 compressed:(char)arg5 peerResponseIdentifier:(id)arg6 messageUUID:(id)arg7 expiryDate:(id)arg8 protobuf:(id)arg9 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(char)expectsPeerResponse;
@end

