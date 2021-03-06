/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:31 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CKSignatureGenerator : NSObject {

	char _valid;
	void* _generator;

}

@property (assign,nonatomic) void* generator;                        //@synthesize generator=_generator - In the implementation block
@property (assign,getter=isValid,nonatomic) char valid;              //@synthesize valid=_valid - In the implementation block
+(id)signatureWithFileDescriptor:(int)arg1 error:(id*)arg2 ;
+(char)isValidSignature:(id)arg1 ;
-(char*)_newSignatureByFinishingGenerator;
-(void)updateWithBytes:(const void*)arg1 length:(unsigned)arg2 ;
-(void)dealloc;
-(id)init;
-(char)isValid;
-(id)dataByFinishingSignature;
-(void)updateWithData:(id)arg1 ;
-(void)setValid:(char)arg1 ;
-(void)setGenerator:(void*)arg1 ;
-(void*)generator;
@end

