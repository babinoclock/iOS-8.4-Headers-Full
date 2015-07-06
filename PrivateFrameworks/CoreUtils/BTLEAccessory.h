/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:40:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CBPeripheral, NSString;

@interface BTLEAccessory : NSObject {

	CBPeripheral* _peripheral;
	NSString* _name;
	double _lastSeen;
	int _lastRSSI;

}

@property (nonatomic,retain) CBPeripheral * peripheral;              //@synthesize peripheral=_peripheral - In the implementation block
@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double lastSeen;                        //@synthesize lastSeen=_lastSeen - In the implementation block
@property (assign,nonatomic) int RSSI;                               //@synthesize lastRSSI=_lastRSSI - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setLastSeen:(double)arg1 ;
-(double)lastSeen;
-(CBPeripheral *)peripheral;
-(void)setPeripheral:(CBPeripheral *)arg1 ;
-(id)initWithPeripheral:(id)arg1 ;
-(void)setRSSI:(int)arg1 ;
-(int)RSSI;
@end

