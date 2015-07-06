/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:43:06 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIAccessibilityElementTraversalOptions : NSObject {

	char _shouldReturnScannerGroups;
	char _shouldReturnTouchContainers;
	char _shouldOnlyIncludeElementsWithVisibleFrame;
	char _shouldUseAllSubviews;
	char _includeHiddenViews;
	char _forSpeakScreen;
	int _direction;
	/*^block*/id _leafNodePredicate;

}

@property (assign,nonatomic) char shouldReturnScannerGroups;                              //@synthesize shouldReturnScannerGroups=_shouldReturnScannerGroups - In the implementation block
@property (assign,nonatomic) char shouldReturnTouchContainers;                            //@synthesize shouldReturnTouchContainers=_shouldReturnTouchContainers - In the implementation block
@property (assign,nonatomic) int direction;                                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,copy) id leafNodePredicate;                                          //@synthesize leafNodePredicate=_leafNodePredicate - In the implementation block
@property (assign,nonatomic) char shouldOnlyIncludeElementsWithVisibleFrame;              //@synthesize shouldOnlyIncludeElementsWithVisibleFrame=_shouldOnlyIncludeElementsWithVisibleFrame - In the implementation block
@property (assign,nonatomic) char shouldUseAllSubviews;                                   //@synthesize shouldUseAllSubviews=_shouldUseAllSubviews - In the implementation block
@property (assign,nonatomic) char includeHiddenViews;                                     //@synthesize includeHiddenViews=_includeHiddenViews - In the implementation block
@property (assign,nonatomic) char forSpeakScreen;                                         //@synthesize forSpeakScreen=_forSpeakScreen - In the implementation block
+(id)defaultVoiceOverOptions;
+(id)defaultSwitchControlOptions;
+(id)options;
+(id)defaultSpeakScreenOptions;
-(void)setLeafNodePredicate:(id)arg1 ;
-(id)leafNodePredicate;
-(void)setShouldUseAllSubviews:(char)arg1 ;
-(void)setIncludeHiddenViews:(char)arg1 ;
-(void)setShouldReturnTouchContainers:(char)arg1 ;
-(void)setShouldReturnScannerGroups:(char)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(void)setShouldOnlyIncludeElementsWithVisibleFrame:(char)arg1 ;
-(void)setForSpeakScreen:(char)arg1 ;
-(char)shouldOnlyIncludeElementsWithVisibleFrame;
-(char)shouldReturnScannerGroups;
-(char)forSpeakScreen;
-(char)shouldUseAllSubviews;
-(char)shouldReturnTouchContainers;
-(char)includeHiddenViews;
@end

