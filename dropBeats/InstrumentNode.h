//
//  InstrumentNode.h
//  dropBeats
//
//  Created by mmdewitt on 10/19/13.
//  Copyright (c) 2013 Michael Dewitt. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "DPNote.h"

@interface InstrumentNode : SKSpriteNode
{
    #define kInstrumentNode @"instrumentNode"
    #define MAX_SCALE 2.0
    #define MIN_SCALE 0.8
}

@property (nonatomic) DPNote* note;
@property (nonatomic) NSInteger instrumentIndex;

-(id)initWithInstrumentIndex: (int) index andSize: (CGSize) size;
+(void)loadActions;
-(void)playInstrument;

@end
