/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:41:34 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/CMState.h>

@class CMOutlineState, OADTablePartStyle;

@interface PMState : CMState {

	CMOutlineState* mListState;
	OADTablePartStyle* mCurrentRowStyle;

}
-(void)dealloc;
-(id)init;
-(id)currentRowStyle;
-(id)listState;
-(void)setCurrentRowStyle:(id)arg1 ;
@end

