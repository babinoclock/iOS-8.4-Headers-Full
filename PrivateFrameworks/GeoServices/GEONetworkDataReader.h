/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:45 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableData;

@interface GEONetworkDataReader : NSObject {

	NSMutableData* _data;
	unsigned _dataLength;
	const void* _bytes;
	unsigned _bookmarkOffset;
	unsigned _offset;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(char)readUnsignedShort:(unsigned short*)arg1 ;
-(id)allData;
-(void)appendNetworkData:(id)arg1 ;
-(id)readString;
-(char)readUnsignedInt:(unsigned*)arg1 ;
-(id)readData:(unsigned)arg1 ;
-(void)markOffset;
-(void)seekToMarkedOffset;
-(char)hasUnreadData;
@end

