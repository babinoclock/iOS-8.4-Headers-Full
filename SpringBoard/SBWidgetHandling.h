/*
* This header is generated by classdump-dyld 0.7
* on Monday, July 6, 2015 at 12:14:51 AM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSSet;


@protocol SBWidgetHandling <NSObject>
@property (nonatomic,readonly) NSSet * visibleWidgetIDs; 
@required
-(void)enableAllWidgets:(/*^block*/id)arg1;
-(char)shouldRequestWidgetRemoteViewControllers;
-(NSSet *)visibleWidgetIDs;
-(id)widgetWithIdentifier:(id)arg1;
-(void)updateWidgetsWithIdentifiers:(id)arg1 launchStats:(id)arg2 completion:(/*^block*/id)arg3;
-(void)makeVisibleWidgetWithIdentifier:(id)arg1 animated:(char)arg2 completion:(/*^block*/id)arg3;

@end

