/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:13 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class RCComposition, NSString;

@interface _RCCompositionUndoItem : NSObject {

	RCComposition* _composition;
	NSString* _reasonAccessTokenName;

}

@property (nonatomic,copy) RCComposition * composition;                     //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) NSString * reasonAccessTokenName;              //@synthesize reasonAccessTokenName=_reasonAccessTokenName - In the implementation block
-(RCComposition *)composition;
-(void)setComposition:(RCComposition *)arg1 ;
-(NSString *)reasonAccessTokenName;
-(void)setReasonAccessTokenName:(NSString *)arg1 ;
@end

