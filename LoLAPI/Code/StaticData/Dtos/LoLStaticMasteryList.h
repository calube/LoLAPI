//
//  LoLStaticMasteryList.h
//  LoLAPI
//
//  Created by Troy Stump on 5/4/14.
//
//

#import "LoLBaseDTO.h"
#import "LoLStaticMasteryTree.h"


@interface LoLStaticMasteryList : LoLBaseDTO

@property (nonatomic, strong) NSDictionary *data; // Map[string, MasteryDto]
@property (nonatomic, strong) LoLStaticMasteryTree *tree; // MasteryTreeDto
@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *version;

@end