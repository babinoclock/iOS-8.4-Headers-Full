/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:52 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libacmobileshim.dylib/ACMSystemInfoProtocol.h>

@interface ACMSystemInfo : NSObject <ACMSystemInfoProtocol>
-(id)systemVersion;
-(id)deviceModel;
-(id)uniqueDeviceIdentifier;
-(id)MACAddress;
-(id)IPAddress;
-(char)isRunningOnModernMobileSystem;
-(id)randomBytesWithSize:(unsigned)arg1 ;
@end

