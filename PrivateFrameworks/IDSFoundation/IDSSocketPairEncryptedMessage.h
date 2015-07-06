/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:05 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IDSFoundation/IDSSocketPairMessage.h>

@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {

	NSData* _data;

}

@property (nonatomic,retain,readonly) NSData * data; 
-(unsigned char)command;
-(void)dealloc;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2 ;
-(id)_nonHeaderData;
@end
