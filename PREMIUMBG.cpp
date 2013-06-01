/*Copyright (C) 2013 Freelance Developer TinkerMechanic </> 
 
* This script was made for only training purposes and should not be 
* re-released by anyone besides the original owner of the script. 
* Any kind of breaking those rules will be reported.
*/
 
#include "Battleground.cpp"
#include "Battleground.h"
#include "Chat.h"
#include "Chathandler.cpp"
#include "ScriptPCH.h"

#define SPELL_ARENA_PREPARATION "14185"
#define NOTIFICATION_COLOR "cff9f3434"
 
class PremiumBGPrivileges : public PlayerScript
  {
  public:
    PremiumBGPrivileges() : PlayerScript("PremiumBGPrivileges"){}
	  {
				 void PremiumBG(Player* player /*type*/)
					 if (inArena())
					 if(player->GetSession()->GetSecurity() == SEC_PREMIUM) /* Checks if the player is PREMIUM. */
						player->CastSpell(SPELL_ARENA_PREPARATION); 
				 player->GetSession->SendNotification("NOTIFICATION_COLOR [Premium] You're spells has been resetted.");
void AddSC_PremiumBGPrivileges()
{
        new PremiumBGPrivileges();
}
