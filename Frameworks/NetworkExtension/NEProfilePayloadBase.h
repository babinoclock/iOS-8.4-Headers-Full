/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEProfilePayloadBaseDelegate.h>

@class NSDictionary, NSMutableDictionary;

@interface NEProfilePayloadBase : NSObject <NEProfilePayloadBaseDelegate> {

	NSDictionary* _payloadAtom;
	NSMutableDictionary* _pendingCertificates;

}

@property (nonatomic,retain) NSDictionary * payloadAtom;                           //@synthesize payloadAtom=_payloadAtom - In the implementation block
@property (nonatomic,copy) NSMutableDictionary * pendingCertificates;              //@synthesize pendingCertificates=_pendingCertificates - In the implementation block
-(NSDictionary *)payloadAtom;
-(void)setPayloadAtom:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)pendingCertificates;
-(void)setPendingCertificates:(NSMutableDictionary *)arg1 ;
-(id)getPreprocessedPayloadContents;
-(char)setPostprocessedPayloadContents:(id)arg1 ;
-(char)addCertificatePending:(id)arg1 certificateTag:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(id)validatePayload;
@end
