/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(MKAnnotationView *)annotationView;
-(SCD_Struct_MK1)coordinate;
@end

