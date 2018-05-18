#ifndef NODE_HPP
#define NODE_HPP

//==================================================================================================
#include "position.hpp"
//==================================================================================================

#include <string>

using namespace std;

//==================================================================================================

/*!
 * \class Node node.hpp "node.hpp"
 * \brief Node class: it has to rappresent all the intersections into labirint
 */

class Node {
     private:

          string name;
          //////////////////////////////////////////////////////////////////////////////////////////

          Node* root;

          Node* parent[3];
          Node* child[3];

          Position* pos;       // Definisce posizione x,y

//==================================================================================================

     public:
          /*! \fn Node::Node(void)
           *  \brief default constructor.
           */
          Node(void);
          /*! \fn Node::Node(Node* root, Node* firstParent, Position* position)
           *  \brief Node constructor that allows to set Root Node, the first parent, Node Position.
           *  \param Node* root The root node of our schema.
           *  \param Node* firstParent The first parent node of the new Node.
           *  \param Position* position The position of the node.
           */
          Node(Node* root, Node* firstParent, Position* position);

          /*! \fn Node::Node(Node* root)
           *  \brief Node constructor that allows to set Root Node.
           *  \param Node* root The root node of our schema.
           */
          Node(Node* root);
          /*! \fn Node::Node(Node* root, Node* parent[])
           *  \brief Node constructor that allows to set Root Node, the parent nodes.
           *  \param Node* root The root node of our schema.
           *  \param Node* parent[] The parent nodes of the new Node.
           */
          Node(Node* root, Node* parent[]);
          /*! \fn Node::Node(Node* root, Node* parent[], Node* child[])
           *  \brief Node constructor that allows to set Root Node, the the parent nodes and child nodes.
           *  \param Node* root The root node of our schema.
           *  \param Node* parent[] The parent nodes of the new Node.
           *  \param Node* child[] The child nodes of the new Node.
           */
          Node(Node* root, Node* parent[], Node* child[]);
          /*! \fn Node::Node(Node* root, Node* parent[], Node* child[], Position* position)
           *  \brief Node constructor that allows to set Root Node, the the parent nodes and child nodes and Nodes' position.
           *  \param Node* root The root node of our schema.
           *  \param Node* parent[] The parent nodes of the new Node.
           *  \param Node* child[] The child nodes of the new Node.
           *  \param Position* position The position of the node.
           */
          Node(Node* root, Node* parent[], Node* child[], Position* position);



          /*! \fn void Node::setParentNode(Node* parent);
           *  \brief Set the parent[1] of the actual node; it's the previous node before reach this.
           *  \param Node* parent The parent node of the actual node.
           */
          void setParentNode(Node* parent);
          /*! \fn void Node::setParentNode(Node* parent);
           *  \brief Set the parent[1] of the actual node; it's the previous node before reach this.
           *  \param Node* parent The parent node of the actual node.
           */
          void setParentNode(Node* parent, int pos);
          /*! \fn void Node::setParentNode(Node* parent);
           *  \brief Set the parent[1] of the actual node; it's the previous node before reach this.
           *  \param int pos parent of position pos.
           *  \return Node* Return the parent node in position pos
           */
          Node* getParentNode(int pos);


          /*! \fn void Node::setChildNode(Node* child, int pos);
           *  \brief Set the child[pos] of the actual node; it's the next node that we will find. This will be initialized after the generation of the new node.
           *  \param Node* child the child node.
           *  \param int pos child at position pos [0,1,2].
           */
          void setChildNode(Node* child, int pos);
          /*! \fn void Node::getChildNode(int pos);
           *  \brief Set the child[1] of the actual node; it's the next node that we will find.
           *  \param int pos child at position pos [0,1,2].
           *  \return Node* Return the child node in position pos
           */
          Node* getChildNode(int pos);



          /*! \fn void Node::setPosition(Position* pos);
          *  \brief Set the position of the actual node.
          *  \param Position* pos.
          */
          void setPosition(Position* pos);
          /*! \fn Position* Node::getPosition(void);
           *  \brief Get the position of the actual node.
           *  \return Position* pos.
           */
          Position* getPosition(void);



          /*! \fn Node* Node::getRoot(void);
           *  \brief Return the root node
           *  \return Node* root The root node
           */
          Node* getRoot(void);



          //////////////////////////////////////////////////////////////////////////////////////////

          /*! \fn void Node::setName(string name);
           *  \brief Set the name of the actual node
           *  \param string name Is the new name of the node.
           */
          void setName(string name);
          /*! \fn string Node::getName(void);
           *  \brief Get the name of the actual node
           *  \return string name Is the new name of the node.
           */
          string getName(void);
};

#endif
