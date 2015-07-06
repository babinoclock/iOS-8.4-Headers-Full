/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:32 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/NSCopying.h>

@class NSUUID;

@interface CBPeer : NSObject <NSCopying> {

	CFUUIDRef _UUID;
	NSUUID* _identifier;
	unsigned _mtuLength;
	int _pairingState;
	int _hostState;
	char _isLinkEncrypted;

}

@property (nonatomic,readonly) CFUUIDRef UUID;                   //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned mtuLength;                 //@synthesize mtuLength=_mtuLength - In the implementation block
@property (assign,nonatomic) int pairingState;                   //@synthesize pairingState=_pairingState - In the implementation block
@property (assign,nonatomic) int hostState;                      //@synthesize hostState=_hostState - In the implementation block
@property (assign,nonatomic) char isLinkEncrypted;               //@synthesize isLinkEncrypted=_isLinkEncrypted - In the implementation block
-(id)initWithInfo:(id)arg1 ;
-(void)handleMsg:(int)arg1 args:(id)arg2 ;
-(void)setHostState:(int)arg1 ;
-(void)handleHostStateUpdated:(id)arg1 ;
-(void)setMtuLength:(unsigned)arg1 ;
-(void)setIsLinkEncrypted:(char)arg1 ;
-(void)handleMTUChanged:(id)arg1 ;
-(void)handleLinkEncryptionChanged:(id)arg1 ;
-(unsigned)mtuLength;
-(int)pairingState;
-(void)setPairingState:(int)arg1 ;
-(int)hostState;
-(char)isLinkEncrypted;
-(void)dealloc;
-(NSUUID *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CFUUIDRef)UUID;
@end
