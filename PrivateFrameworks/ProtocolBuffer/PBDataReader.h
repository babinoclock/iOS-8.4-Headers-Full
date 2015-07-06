/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSData;

@interface PBDataReader : NSObject {

	unsigned _pos;
	char _error;
	const char* _bytes;
	NSData* _data;
	unsigned _length;

}

@property (assign) unsigned length;                //@synthesize length=_length - In the implementation block
@property (assign) unsigned position;              //@synthesize pos=_pos - In the implementation block
-(void)dealloc;
-(unsigned)length;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(unsigned)offset;
-(void)setLength:(unsigned)arg1 ;
-(char)isAtEnd;
-(float)readFloat;
-(id)readData;
-(id)readString;
-(char)hasError;
-(char)seekToOffset:(unsigned)arg1 ;
-(id)readBytes:(unsigned)arg1 ;
-(unsigned)readBigEndianFixed32;
-(unsigned short)readBigEndianFixed16;
-(void)updateData:(id)arg1 ;
-(void)readTag:(unsigned short*)arg1 andType:(char*)arg2 ;
-(char)skipValueWithTag:(unsigned short)arg1 andType:(unsigned char)arg2 ;
-(unsigned long long)readBigEndianFixed64;
-(id)readProtoBuffer;
-(char)readInt8;
-(long long)readVarInt;
-(double)readDouble;
-(int)readInt32;
-(long long)readInt64;
-(unsigned)readUint32;
-(unsigned long long)readUint64;
-(int)readSint32;
-(long long)readSint64;
-(unsigned)readFixed32;
-(unsigned long long)readFixed64;
-(int)readSfixed32;
-(long long)readSfixed64;
-(char)readBOOL;
-(char)mark:(SCD_Struct_PB0*)arg1 ;
-(void)recall:(const SCD_Struct_PB0*)arg1 ;
-(id)readBigEndianShortThenString;
-(char)hasMoreData;
@end

