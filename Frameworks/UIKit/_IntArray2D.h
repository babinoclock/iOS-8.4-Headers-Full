/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:50 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _IntArray2D : NSObject {

	int* _arrayData;
	unsigned _iSize;
	unsigned _jSize;
	char _shouldBoundsCheck;

}

@property (nonatomic,readonly) unsigned iSize;                    //@synthesize iSize=_iSize - In the implementation block
@property (nonatomic,readonly) unsigned jSize;                    //@synthesize jSize=_jSize - In the implementation block
@property (assign,nonatomic) char shouldBoundsCheck;              //@synthesize shouldBoundsCheck=_shouldBoundsCheck - In the implementation block
+(id)arrayWithISize:(unsigned)arg1 jSize:(unsigned)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithISize:(unsigned)arg1 jSize:(unsigned)arg2 ;
-(int):(unsigned)arg1 :(unsigned)arg2 ;
-(char)inBoundsForIIndex:(unsigned)arg1 jIndex:(unsigned)arg2 ;
-(void)assertBoundsForIIndex:(unsigned)arg1 jIndex:(unsigned)arg2 ;
-(int):(unsigned)arg1 :(unsigned)arg2 outOfBoundsReturnValue:(int)arg3 ;
-(void):(unsigned)arg1 :(unsigned)arg2 newValue:(int)arg3 ;
-(unsigned)iSize;
-(unsigned)jSize;
-(char)shouldBoundsCheck;
-(void)setShouldBoundsCheck:(char)arg1 ;
@end
