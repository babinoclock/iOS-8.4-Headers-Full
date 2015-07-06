/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:56 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <TextInput/TIKeyboardOutput.h>
#import <UIKit/NSCopying.h>
#import <UIKit/NSSecureCoding.h>

@interface _UIInputViewKeyboardOutput : TIKeyboardOutput <NSCopying, NSSecureCoding> {

	char _didBeginOutput;
	int _positionOffset;

}

@property (assign,nonatomic) int positionOffset;               //@synthesize positionOffset=_positionOffset - In the implementation block
@property (assign,nonatomic) char didBeginOutput;              //@synthesize didBeginOutput=_didBeginOutput - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)didBeginOutput;
-(int)positionOffset;
-(void)setPositionOffset:(int)arg1 ;
-(void)setDidBeginOutput:(char)arg1 ;
-(void)setAcceptedCandidate:(id)arg1 ;
-(void)setTextToCommit:(id)arg1 ;
-(void)setForwardDeletionCount:(unsigned)arg1 ;
-(void)setInsertionTextAfterSelection:(id)arg1 ;
-(void)setShortcutConversion:(id)arg1 ;
-(void)setHandwritingStrokesToDelete:(id)arg1 ;
@end

