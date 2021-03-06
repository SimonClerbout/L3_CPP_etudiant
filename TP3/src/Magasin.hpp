#ifndef MAGASIN_HPP
#define MAGASIN_HPP

#include <vector>
#include <string>
#include "Produit.hpp"
#include "Client.hpp"
#include "Location.hpp"

class Magasin{
private :
  std::vector<Client> _clients;
  std::vector<Produit> _produits;
  std::vector<Location> _locations;
  int _idCourantClient;
  int _idCourantProduit;

public :
  Magasin() : _idCourantClient(0), _idCourantProduit(0)
  {}
  int nbClients() const;
  void ajouterClient(const std::string& nom);
  void afficherClients() const;
  void supprimerClient(int idClient);
  int nbProduits() const;
  void ajouterProduit(const std::string& nom);
  void afficherProduits() const;
  void supprimerProduit(int idProduit);
  int nbLocations() const;
  void ajouterLocation(int idClient, int idProduit);
  void afficherLocations() const;
  void supprimerLocation(int idClient, int idProduit);
  bool trouberClientDansLocation(int idClient) const;
  std::vector<int> calculerClientLibres() const;
  bool trouverProduiDansLocation(int idProduit) const;
  std::vector<int> calculerProduitsLibres() const;
};

#endif
