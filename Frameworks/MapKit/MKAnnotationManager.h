/*
* This header is generated by classdump-dyld 0.7
* on Sunday, July 5, 2015 at 9:37:30 PM Eastern Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKAnnotationMarkerContainer, MKAnnotationManagerDelegate, MKAnnotation;
#import <MapKit/MapKit-Structs.h>
@class NSTimer, MKQuadTrie, NSMutableSet, NSMapTable, NSArray;

@interface MKAnnotationManager : NSObject {

	id<MKAnnotationMarkerContainer> _container;
	id<MKAnnotationManagerDelegate> _delegate;
	char _annotationRepresentationsAreAddedImmediately;
	NSTimer* _updateVisibleTimer;
	MKQuadTrie* _annotations;
	NSMutableSet* _visibleAnnotations;
	NSMutableSet* _pendingAnnotations;
	NSMutableSet* _disallowAnimationAnnotations;
	NSMutableSet* _invalidCoordinateAnnotations;
	id<MKAnnotation> _selectedAnnotation;
	id<MKAnnotation> _draggedAnnotation;
	NSMapTable* _annotationsToRepresentations;
	NSMutableSet* _annotationRepresentations;
	NSMapTable* _reusableAnnotationRepresentations;
	NSMutableSet* _managedAnnotations;
	NSMutableSet* _managedAnnotationsObservingCoordinate;
	char _isChangingCoordinate;

}

@property (assign,nonatomic,__weak) id<MKAnnotationMarkerContainer> container;                                      //@synthesize container=_container - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotationManagerDelegate> delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) char annotationRepresentationsAreAddedImmediately;                                     //@synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately - In the implementation block
@property (assign,nonatomic,__weak) id<MKAnnotation> draggedAnnotation;                                             //@synthesize draggedAnnotation=_draggedAnnotation - In the implementation block
@property (nonatomic,__weak,readonly) id<MKAnnotationRepresentation> selectedAnnotationRepresentation; 
@property (nonatomic,readonly) NSArray * annotationRepresentations; 
@property (nonatomic,readonly) NSArray * annotations; 
-(char)annotationRepresentationsAreAddedImmediately;
-(void)setAnnotationRepresentationsAreAddedImmediately:(char)arg1 ;
-(void)updateVisibleAnnotations;
-(void)deselectAnnotation:(id)arg1 animated:(char)arg2 ;
-(void)selectAnnotation:(id)arg1 animated:(char)arg2 avoid:(CGRect)arg3 ;
-(id<MKAnnotationRepresentation>)selectedAnnotationRepresentation;
-(void)showAnnotationsInMapRect:(SCD_Struct_MK2)arg1 ;
-(id)annotationsInMapRect:(SCD_Struct_MK2)arg1 ;
-(NSArray *)annotationRepresentations;
-(void)addAnnotation:(id)arg1 allowAnimation:(char)arg2 ;
-(void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2 ;
-(void)addRepresentationsForAnnotations:(id)arg1 ;
-(id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1 ;
-(id)representationForAnnotation:(id)arg1 ;
-(char)internalAnnotationAllowsCustomRepresentation:(id)arg1 ;
-(id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2 ;
-(void)cleanUpAnnotationRepresentationForRemoval:(id)arg1 ;
-(char)annotationIsInternal:(id)arg1 ;
-(id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1 ;
-(void)addManagedAnnotation:(id)arg1 observeCoordinateChanges:(char)arg2 ;
-(void)_setupUpdateVisibleAnnotationsTimer;
-(void)_addAnnotation:(id)arg1 updateVisible:(char)arg2 ;
-(void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(char)arg2 ;
-(void)_removeAnnotation:(id)arg1 updateVisible:(char)arg2 removeFromContainer:(char)arg3 ;
-(id)_addRepresentationForAnnotation:(id)arg1 ;
-(void)addManagedAnnotation:(id)arg1 ;
-(id)addRepresentationForManagedAnnotation:(id)arg1 notifyDelegate:(char)arg2 ;
-(void)removeRepresentationForManagedAnnotation:(id)arg1 ;
-(id<MKAnnotation>)draggedAnnotation;
-(void)setDraggedAnnotation:(id<MKAnnotation>)arg1 ;
-(char)containsAnnotation:(id)arg1 ;
-(NSArray *)annotations;
-(void)selectAnnotation:(id)arg1 animated:(char)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<MKAnnotationManagerDelegate>)arg1 ;
-(id)init;
-(id<MKAnnotationManagerDelegate>)delegate;
-(void)setContainer:(id<MKAnnotationMarkerContainer>)arg1 ;
-(id<MKAnnotationMarkerContainer>)container;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

