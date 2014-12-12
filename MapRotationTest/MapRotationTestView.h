//
//  MapRotationTestView.h
//  MapRotationTest
//
//  Created by Uli Kusterer on 2014-12-12.
//  Copyright (c) 2014 Uli Kusterer. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MapRotationTestView : NSView
{
	NSPoint		currPos;		// The position of the character in the world.
	CGFloat		currAngle;		// The direction the character is facing in the world.
	BOOL		mapModeDisplay;	// YES if we want to show a map where North is up, NO if we want the world to rotate around the character, who's always facing up.
}

@end
