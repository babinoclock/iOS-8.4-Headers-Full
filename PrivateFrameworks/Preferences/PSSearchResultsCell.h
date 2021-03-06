/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:12 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@interface PSSearchResultsCell : UITableViewCell {

	char _shouldIndentContent;
	char _shouldIndentSeparator;

}

@property (assign,nonatomic) char shouldIndentContent;                //@synthesize shouldIndentContent=_shouldIndentContent - In the implementation block
@property (assign,nonatomic) char shouldIndentSeparator;              //@synthesize shouldIndentSeparator=_shouldIndentSeparator - In the implementation block
+(id)reuseIdentifier;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(void)prepareForReuse;
-(void)setDetailTitle:(id)arg1 ;
-(void)setShouldIndentSeparator:(char)arg1 ;
-(void)setShouldIndentContent:(char)arg1 ;
-(void)_resetIndentation;
-(char)shouldIndentContent;
-(char)shouldIndentSeparator;
@end

