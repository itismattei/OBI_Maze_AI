//==================================================================================================
#include "node.hpp"
//==================================================================================================

#include <vector>

using namespace std;

//==================================================================================================

vector<Node*> getRoute(Node* start, Node* finish) {
     vector<Node*> route;

     /*
      * Risaliamo fino al nodo radice
      * andando a ritroso da start
      *
      * Stesso procedimento per finish
      *
      * Uniamo i due percorsi
      */

     vector<Node*> str;
     vector<Node*> ftr;

     Node* temp;

     // TODO Threads

     //str.insert(str.end() + 1, start);
     str.push_back(start);
     temp = start->getParentNode(1);
     while(temp != NULL) {
          //str.insert(str.end() + 1, temp);
          str.push_back(temp);
          temp = temp->getParentNode(1);
     }


     //ftr.insert(str.end() + 1, finish);
     ftr.push_back(finish);
     temp = finish->getParentNode(1);
     while(temp != NULL) {
          //ftr.insert(ftr.end() + 1, temp);
          ftr.push_back(temp);
          temp = temp->getParentNode(1);
     }



     // TODO Dividere in più funzioni

     for(int i = 0 ; i < str.size() ; i++) {
          //route.insert(route.end() + 1, str[i]);
          route.push_back(str[i]);
     }

     for(int i = (ftr.size() - 2) ; i >= 0 ; i--) {
          //route.insert(route.end() + 1, str[i]);
          route.push_back(ftr[i]);
     }

     //=============================================================================================

     return route;
};

void startRotation(Node* acc_node) {
     int alpha = acc_node->getPosition()->getAlpha();

     // Ruota OBI fino a quando obi_rot == alpha
};

//==================================================================================================
