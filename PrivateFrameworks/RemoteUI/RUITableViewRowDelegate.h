/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:42:20 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUITableViewRowDelegate
@required
-(Class)tableCellClassForTableViewRow:(id)arg1;
-(void)rowIsFirstResponder:(id)arg1;
-(void)rowDidChange:(id)arg1;
-(void)rowDidEndEditing:(id)arg1;
-(id)textFieldRow:(id)arg1 changeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3;
-(id)sourceURLForRUITableViewRow;
-(void)rowActivatedLink:(id)arg1 attributes:(id)arg2 completion:(/*^block*/id)arg3;

@end

