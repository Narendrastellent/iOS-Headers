/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MKQuadTrie, NSArray, NSMapTable, NSMutableSet, NSTimer;

// Not exported
@interface MKAnnotationManager : NSObject
{
    id <MKAnnotationMarkerContainer> _container;
    id <MKAnnotationManagerDelegate> _delegate;
    _Bool _annotationRepresentationsAreAddedImmediately;
    NSTimer *_updateVisibleTimer;
    MKQuadTrie *_annotations;
    NSMutableSet *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    id <MKAnnotation> _selectedAnnotation;
    id <MKAnnotation> _draggedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
    NSMutableSet *_managedAnnotations;
    NSMutableSet *_managedAnnotationsObservingCoordinate;
    NSMutableSet *_addingAnnotationRepresentations;
    id <MKAnnotationRepresentation> _annotationRepresentationToShowCallout;
    _Bool _animateDelayedShowCallout;
    struct CGRect _rectToAvoidForDelayedShowCallout;
    _Bool _isChangingCoordinate;
}

@property(nonatomic) id <MKAnnotation> draggedAnnotation; // @synthesize draggedAnnotation=_draggedAnnotation;
@property(nonatomic) _Bool annotationRepresentationsAreAddedImmediately; // @synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately;
@property(nonatomic) id <MKAnnotationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) id <MKAnnotationMarkerContainer> container; // @synthesize container=_container;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(_Bool)arg2;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (id)_addRepresentationForAnnotation:(id)arg1;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;
- (_Bool)internalAnnotationAllowsCustomRepresentation:(id)arg1;
- (_Bool)annotationIsInternal:(id)arg1;
- (id)newDefaultAnnotationRepresentationForAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)representationForAnnotation:(id)arg1;
@property(readonly, nonatomic) id <MKAnnotationRepresentation> selectedAnnotationRepresentation;
- (void)finishAddingAnnotationRepresentations:(id)arg1;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2 avoid:(struct CGRect)arg3;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *annotationRepresentations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)updateVisibleAnnotations;
- (void)showAnnotationsInMapRect:(CDStruct_90e2a262)arg1;
- (id)annotationsInMapRect:(CDStruct_90e2a262)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;
- (void)removeRepresentationForManagedAnnotation:(id)arg1;
- (id)addRepresentationForManagedAnnotation:(id)arg1 notifyDelegate:(_Bool)arg2;
- (void)addRepresentationsForAnnotations:(id)arg1;
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1;
- (void)_removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2 removeFromContainer:(_Bool)arg3;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)addAnnotation:(id)arg1;
- (void)_addAnnotation:(id)arg1 updateVisible:(_Bool)arg2;
- (void)addManagedAnnotation:(id)arg1;
- (void)addManagedAnnotation:(id)arg1 observeCoordinateChanges:(_Bool)arg2;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)dealloc;
- (id)init;

@end

