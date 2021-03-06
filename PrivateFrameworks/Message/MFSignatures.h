/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:25 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFSignatures : NSObject
+(id)sharedInstance;
+(id)signatureMarkupFormat:(id)arg1 ;
+(id)signaturePlainTextFormat:(id)arg1 ;
+(id)stripSignatureMarkup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setSignature:(id)arg1 ;
-(id)signature;
-(id)_modelSpecificLocalizedStringKeyForKey:(id)arg1 ;
-(id)_getValue:(id)arg1 ;
-(id)defaultSignature;
-(void)_setValue:(id)arg1 value:(void*)arg2 ;
-(id)signatureForAccount:(id)arg1 ;
-(char)useAccountSignatures;
-(void)setSignature:(id)arg1 forAccount:(id)arg2 ;
-(id)signatureForSendingEmailAddress:(id)arg1 ;
-(void)clearSignature;
-(void)setUseAccountSignatures:(char)arg1 ;
-(void)setSignature:(id)arg1 forEmailAddress:(id)arg2 ;
-(id)signatureMarkupForSendingEmailAddress:(id)arg1 ;
-(id)signaturePlainTextForSendingEmailAddress:(id)arg1 ;
@end

