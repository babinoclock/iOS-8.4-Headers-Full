/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:49 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PKPassGroupStackViewDatasource <NSObject>
@optional
-(id)groupStackView:(id)arg1 headerForPassType:(unsigned)arg2;
-(id)groupStackView:(id)arg1 subheaderForPassType:(unsigned)arg2;
-(char)groupStackViewShouldShowHeaderViews:(id)arg1;
-(char)groupStackView:(id)arg1 requiresHeaderForPassType:(unsigned)arg2;

@required
-(unsigned)indexOfGroup:(id)arg1;
-(id)groupAtIndex:(unsigned)arg1;
-(unsigned)indexOfSeparationGroup;
-(unsigned)numberOfGroups;

@end

