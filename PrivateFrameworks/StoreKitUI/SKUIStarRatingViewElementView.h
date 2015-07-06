/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:46 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <StoreKitUI/SKUIViewElementView.h>

@class UIImage, SKUIAttributedStringLayout, NSString;

@interface SKUIStarRatingViewElementView : UIView <SKUIViewElementView> {

	UIEdgeInsets _contentInset;
	int _elementSpacing;
	UIImage* _starRatingImage;
	SKUIAttributedStringLayout* _textLayout;

}

@property (assign,nonatomic) int elementSpacing;                    //@synthesize elementSpacing=_elementSpacing - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)prefetchResourcesForViewElement:(id)arg1 reason:(int)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(float)arg1 viewElement:(id)arg2 context:(id)arg3 ;
+(id)textPropertiesForViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
+(id)_attributedStringWithViewElement:(id)arg1 context:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(float)arg2 context:(id)arg3 ;
-(char)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(char)updateWithItemState:(id)arg1 context:(id)arg2 animated:(char)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
-(void)setElementSpacing:(int)arg1 ;
-(int)elementSpacing;
@end
