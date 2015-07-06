/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:54 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewFlowLayout.h>

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {

	id* _attributes;
	float* _headerWidths;
	int _arrayLength;

}
+(Class)invalidationContextClass;
-(void)dealloc;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(char)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2 ;
-(void)_setAttributes:(id)arg1 ForSection:(int)arg2 ;
-(char)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
@end

