/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:38:51 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIActivityIndicatorView, NSArray;

@interface UIPrinterSearchingView : UIView {

	UILabel* _searchingLabel;
	UIActivityIndicatorView* _searchingIndicator;
	NSArray* _searchingLabelConstraints;

}
-(void)dealloc;
-(void)searchTimeout;
-(id)initInView:(id)arg1 ;
-(void)setSearching:(char)arg1 ;
@end

