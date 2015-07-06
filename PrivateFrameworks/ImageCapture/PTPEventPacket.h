/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:14 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface PTPEventPacket : NSObject {

	int _numParameters;
	unsigned short _eventCode;
	unsigned long _transactionID;
	unsigned long _parameters[3];

}
-(id)description;
-(unsigned long)transactionID;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(unsigned long)parameter1;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 ;
-(unsigned long)parameter2;
-(unsigned long)parameter3;
-(void)setTransactionID:(unsigned long)arg1 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned long)arg2 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned long)arg2 parameter1:(unsigned long)arg3 parameter2:(unsigned long)arg4 parameter3:(unsigned long)arg5 ;
-(void)setParameter1:(unsigned long)arg1 ;
-(void)setParameter2:(unsigned long)arg1 ;
-(void)setParameter3:(unsigned long)arg1 ;
-(void)setEventCode:(unsigned short)arg1 ;
-(unsigned short)eventCode;
@end

