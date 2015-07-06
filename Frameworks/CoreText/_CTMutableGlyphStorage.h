/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:36:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreText/_CTGlyphStorage.h>
#import <CoreText/_CTGlyphStorageAdvanceLookup.h>

@class CTGlyphStorageInterface;

@interface _CTMutableGlyphStorage : _CTGlyphStorage <_CTGlyphStorageAdvanceLookup> {

	CTGlyphStorageInterface* _interface;

}
-(void)setProps:(unsigned)arg1 atIndex:(long)arg2 ;
-(void)setAttachmentCount:(long)arg1 atIndex:(long)arg2 ;
-(void)setStringIndex:(long)arg1 atIndex:(long)arg2 ;
-(long)attachmentCountAtIndex:(long)arg1 ;
-(void)popGlyphAtIndex:(long)arg1 ;
-(void)pushGlyphAtIndex:(long)arg1 ;
-(void)initGlyphStackWithCapacity:(long)arg1 ;
-(void)puntStringIndicesInRange:(SCD_Struct_CT0)arg1 by:(long)arg2 ;
-(id)copyWithRange:(SCD_Struct_CT0)arg1 ;
-(void*)refCon;
-(void)setGlyph:(unsigned short)arg1 atIndex:(long)arg2 ;
-(void)setAdvance:(CGSize)arg1 atIndex:(long)arg2 ;
-(void)insertGlyphsAtRange:(SCD_Struct_CT0)arg1 ;
-(void)swapGlyphsAtIndex:(long)arg1 withIndex:(long)arg2 ;
-(void)moveGlyphsFromRange:(SCD_Struct_CT0)arg1 toIndex:(long)arg2 ;
-(id)initWithInterface:(id)arg1 ;
-(CGSize)customAdvanceForIndex:(long)arg1 ;
-(void)sync;
-(void)disposeGlyphStack;
@end

