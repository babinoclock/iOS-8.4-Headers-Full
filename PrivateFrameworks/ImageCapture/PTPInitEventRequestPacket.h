/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPInitEventRequestPacket : NSObject {

	unsigned long _connectionNumber;

}
-(id)description;
-(id)contentForTCP;
-(id)initWithConnectionNumber:(unsigned long)arg1 ;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned long)connectionNumber;
-(void)setConnectionNumber:(unsigned long)arg1 ;
@end

