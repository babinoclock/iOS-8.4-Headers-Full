/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATSignatureProvider.h>

@class ATGrappaSession, ATDeviceSettings;

@interface ATGrappaSignatureProvider : ATSignatureProvider {

	ATGrappaSession* _grappaSession;
	ATDeviceSettings* _settings;

}
-(id)initWithGrappaSession:(id)arg1 ;
-(id)createSignature:(id*)arg1 forData:(id)arg2 ;
-(id)verifySignature:(id)arg1 forData:(id)arg2 ;
@end
