/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:39:19 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface AXIPCServerClientRegistration : NSObject {

	unsigned _port;
	NSString* _identifier;

}

@property (assign,nonatomic) unsigned port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(unsigned)port;
-(void)setPort:(unsigned)arg1 ;
@end

