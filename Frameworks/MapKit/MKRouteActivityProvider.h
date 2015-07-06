/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MKPlaceActivityProvider.h>

@class MKMapItem;

@interface MKRouteActivityProvider : MKPlaceActivityProvider {

	MKMapItem* _sourceMapItem;

}

@property (nonatomic,retain) MKMapItem * destinationMapItem; 
@property (nonatomic,retain) MKMapItem * sourceMapItem;                   //@synthesize sourceMapItem=_sourceMapItem - In the implementation block
-(id)initWithSource:(id)arg1 destination:(id)arg2 ;
-(id)activityURL;
-(MKMapItem *)sourceMapItem;
-(id)activitySourceTitle;
-(void)setDestinationMapItem:(MKMapItem *)arg1 ;
-(MKMapItem *)destinationMapItem;
-(void)setSourceMapItem:(MKMapItem *)arg1 ;
@end

