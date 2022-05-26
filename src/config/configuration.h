/*
 * AgentSpeak code:
 *
 * standard_mode_available.
 * 
 * +preserve_conditions : dark_inside <- !brighten.
 * 
 * +!brighten: eco_mode_available <- raise_blinds.
 * 
 * +!brighten: standard_mode_available <- turn_on_lights.
 * 
 * +sunny_outside <- +eco_mode_available.
 * 
 * +cloudy_outside <- -eco_mode_available.
 */ 

#ifndef CONFIGURATION_H_
#define CONFIGURATION_H_

#include "bdi/belief_base.h"
#include "bdi/event_base.h"
#include "bdi/plan_base.h"
#include "bdi/intention_base.h"
#include "../../data/functions.h"

class AgentSettings
{
private:
  Body body_0;
  Context context_0;
  Body body_1;
  Context context_1;
  Body body_2;
  Context context_2;
  Body body_3;
  Context context_3;
  Body body_4;
  Context context_4;
  BeliefBase belief_base;
  EventBase event_base;
  PlanBase plan_base;
  IntentionBase intention_base;

public:
  AgentSettings()
  {
    belief_base = BeliefBase(6);
    event_base = EventBase(15);
    plan_base = PlanBase(5);
    intention_base = IntentionBase(15, 15);

    //--------------------------------------------------------------------------

    Belief belief_cloudy_outside(0, update_cloudy_outside, false);
    belief_base.add_belief(belief_cloudy_outside);

    //--------------------------------------------------------------------------

    Belief belief_dark_inside(1, update_dark_inside, false);
    belief_base.add_belief(belief_dark_inside);

    //--------------------------------------------------------------------------

    Belief belief_eco_mode_available(2, update_eco_mode_available, false);
    belief_base.add_belief(belief_eco_mode_available);

    //--------------------------------------------------------------------------

    Belief belief_preserve_conditions(3, update_preserve_conditions, false);
    belief_base.add_belief(belief_preserve_conditions);

    //--------------------------------------------------------------------------

    Belief belief_standard_mode_available(4, update_standard_mode_available, true);
    belief_base.add_belief(belief_standard_mode_available);

    //--------------------------------------------------------------------------

    Belief belief_sunny_outside(5, update_sunny_outside, false);
    belief_base.add_belief(belief_sunny_outside);

    //--------------------------------------------------------------------------

    Proposition prop_0(3);
    context_0 = Context(1);
    body_0 = Body(1);

    Proposition prop_0_dark_inside(1);
    ContextCondition cond_0_0(prop_0_dark_inside);
    context_0.add_context(cond_0_0);

    Proposition prop_0_body_0(6);
    BodyInstruction inst_0_0(BodyType::GOAL, prop_0_body_0, EventOperator::GOAL_ADDITION);
    body_0.add_instruction(inst_0_0);

    Plan plan_0(EventOperator::BELIEF_ADDITION, prop_0, &context_0, &body_0);
    plan_base.add_plan(plan_0);

    //--------------------------------------------------------------------------

    Proposition prop_1(6);
    context_1 = Context(1);
    body_1 = Body(1);

    Proposition prop_1_eco_mode_available(2);
    ContextCondition cond_1_0(prop_1_eco_mode_available);
    context_1.add_context(cond_1_0);

    Proposition prop_1_body_0(7);
    BodyInstruction inst_0_1(BodyType::ACTION, prop_1_body_0, action_raise_blinds);
    body_1.add_instruction(inst_0_1);

    Plan plan_1(EventOperator::GOAL_ADDITION, prop_1, &context_1, &body_1);
    plan_base.add_plan(plan_1);

    //--------------------------------------------------------------------------

    Proposition prop_2(6);
    context_2 = Context(1);
    body_2 = Body(1);

    Proposition prop_2_standard_mode_available(4);
    ContextCondition cond_2_0(prop_2_standard_mode_available);
    context_2.add_context(cond_2_0);

    Proposition prop_2_body_0(8);
    BodyInstruction inst_0_2(BodyType::ACTION, prop_2_body_0, action_turn_on_lights);
    body_2.add_instruction(inst_0_2);

    Plan plan_2(EventOperator::GOAL_ADDITION, prop_2, &context_2, &body_2);
    plan_base.add_plan(plan_2);

    //--------------------------------------------------------------------------

    Proposition prop_3(5);
    context_3 = Context(0);
    body_3 = Body(1);

    Proposition prop_3_body_0(2);
    BodyInstruction inst_0_3(BodyType::BELIEF, prop_3_body_0, EventOperator::BELIEF_ADDITION);
    body_3.add_instruction(inst_0_3);

    Plan plan_3(EventOperator::BELIEF_ADDITION, prop_3, &context_3, &body_3);
    plan_base.add_plan(plan_3);

    //--------------------------------------------------------------------------

    Proposition prop_4(0);
    context_4 = Context(0);
    body_4 = Body(1);

    Proposition prop_4_body_0(2);
    BodyInstruction inst_0_4(BodyType::BELIEF, prop_4_body_0, EventOperator::BELIEF_DELETION);
    body_4.add_instruction(inst_0_4);

    Plan plan_4(EventOperator::BELIEF_ADDITION, prop_4, &context_4, &body_4);
    plan_base.add_plan(plan_4);
  }

  BeliefBase * get_belief_base()
  {
    return &belief_base;
  }

  EventBase * get_event_base()
  {
    return &event_base;
  }

  PlanBase * get_plan_base()
  {
    return &plan_base;
  }

  IntentionBase * get_intention_base()
  {
    return &intention_base;
  }
};

#endif /*CONFIGURATION_H_ */